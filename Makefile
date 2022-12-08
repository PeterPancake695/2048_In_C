### COMPILATION FLAGS ###
CFLAGS=-O1 -Wall -std=c99 -Wno-missing-braces -I ./include/ -L ./lib/ -lraylib -lopengl32 -lgdi32 -lwinmm -g

### TARGET ###
TARGET=2048InC

# WINDOWS TARGET
ifeq ($(OS), Windows_NT)
	TARGET=2048InC.exe
endif

### COMPILER ###
CC=gcc

### DEPENDENCIES ###

DEPGAME=src/game/game.c src/game/game.h src/game/move.h src/game/random.h src/game/table.h
DEPGUI=src/gui/gui.c src/gui/gui.h src/gui/menu.c
DEPENDS=src/init.h src/resources.h src/intro.h $(DEPGUI) $(DEPGAME)

### SOURCE FILE ###
SRC=src/main.c 

$(TARGET): $(SRC) $(DEPENDS) Makefile
	$(CC) $< -o $@ $(CFLAGS)

build: $(TARGET)

run: build
	./$(TARGET)


.PHONY=clean

clean:
	rm $(TARGET)