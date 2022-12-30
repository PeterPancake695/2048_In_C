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
	printTable();
	game_draw_score();
	if(gameLost == false && gameWon == false){
		if(gamePaused == false){
			keyPress();	
		}
		else{
			gui_game_pause_draw();
		}
		gui_game_pause_input();
	}
    LoseCheck();
    WinCheck();
}
