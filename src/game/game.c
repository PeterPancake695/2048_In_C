#pragma once
#include "move.h"

void newGame(){
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            tiles[i][j] = 0;
        }
    }
    random();
    random();
}

void keyPress(){
    if(IsKeyPressed(KEY_UP)){
        move(2);
    }
    if(IsKeyPressed(KEY_LEFT)){
        move(3);
    }
    if(IsKeyPressed(KEY_DOWN)){
        move(0);
    }
    if(IsKeyPressed(KEY_RIGHT)){
        move(1);
    }
}

void initGame(){
    drawTilePad();
    keyPress();
	printTable();
}
