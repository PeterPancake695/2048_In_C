### COMPILATION FLAGS ###
CFLAGS=-O1 -Wall -std=c99 -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm -g

### TARGET ###
TARGET=2048InC

# WINDOWS TARGET
ifeq ($(OS), Windows_NT)
	TARGET=2048InC.exe
endif

### COMPILER ###
COMP=gcc

#SOURCE FILE
SRC=src/main.c src/init.h src/game.h src/resources.h

$(TARGET): $(SRC) Makefile
	$(CC) $< -o $@ $(CFLAGS)

build: $(TARGET)

run: build
	./$(TARGET)

clean:
	rm $(TARGET)