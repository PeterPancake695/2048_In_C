#pragma once
#include "move.h"

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
    if(gameLost == 0 && gameWon == 0){
        keyPress();
    }
	printTable();
    LoseCheck();
    WinCheck();
}
