CC      = gcc
CFLAGS  = -Wall -I./include
LIBS    = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11

SRCS = $(wildcard src/*.c) \
       $(wildcard src/salas/*.c)

OBJS = $(SRCS:src/%.c=src/build/%.o)

TARGET = rpg


all: $(TARGET)
	@echo "Compilação concluída!"


$(TARGET): $(OBJS)
	$(CC) $(OBJS) $(LIBS) -o $(TARGET)


src/build/%.o: src/%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf src/build/*.o $(TARGET)


run: all
	./$(TARGET)


.PHONY: all clean run