CC      = gcc
CFLAGS  = -Wall -Wextra -I./include
LDFLAGS =
LIBS    = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

TARGET  = rpg
BUILD   = build

# Encontra TODOS os .c dentro de src
SRCS := $(shell find src -type f -name '*.c')

# Gera os .o mantendo a estrutura de pastas
OBJS := $(patsubst src/%.c,$(BUILD)/%.o,$(SRCS))

# Dependências de headers (opcional, mas recomendado)
DEPS := $(OBJS:.o=.d)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) $(LIBS) -o $@

$(BUILD)/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

run: all
	./$(TARGET)

clean:
	rm -rf $(BUILD) $(TARGET)

rebuild: clean all

.PHONY: all clean run rebuild