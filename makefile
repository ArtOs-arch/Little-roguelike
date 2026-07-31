CC = gcc

CFLAGS = -Wall -I./include
LIBS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

TARGET = rpg

# Encontra TODOS os .c dentro de src
SRCS := $(shell find src -type f -name "*.c")

# Gera os .o mantendo a estrutura de pastas
OBJS := $(patsubst src/%.c,build/%.o,$(SRCS))

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LIBS) -o $(TARGET)

build/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	./$(TARGET)

clean:
	rm -rf build $(TARGET)

rebuild: clean all

.PHONY: all clean run rebuild