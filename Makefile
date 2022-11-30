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

### DEPENDENCIES ###

DEPGUI=src/gui/gui.c src/gui/gui.h src/gui/menu.c
DEPENDS=src/init.h src/game.h src/resources.h src/intro.h $(DEPGUI)

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