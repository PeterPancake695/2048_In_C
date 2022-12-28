### COMPILATION FLAGS ###

CFLAGS=-O1 -Wall -std=c99 -Wno-missing-braces -I ./include. -L ./lib/linux -lraylib -lGL -lm -ldl -lrt -lX11

ifeq ($(OS), Windows_NT)
	CFLAGS=-O1 -Wall -std=c99 -Wno-missing-braces -I ./include/ -L ./lib/windows -lraylib -lopengl32 -lgdi32 -lwinmm -g -mwindows
endif

### TARGET ###
TARGET=2048InC

# WINDOWS TARGET #
ifeq ($(OS), Windows_NT)
	TARGET=2048InC.exe
endif

### COMPILER ###
CC=gcc

### DEPENDENCIES ###

DEPGAME=src/game/game.c src/game/game.h src/game/move.h src/game/table.h src/game/winlose.h src/game/score.h
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
