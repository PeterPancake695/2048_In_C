#pragma once
#include "game.h"
#include "game/game.c"
#include "intro.h"

// initializes the game
void init(){
	save = fopen("2048InC.sav", "r");
	if(save == NULL){
		exit(1);
	}
	file_save_read();
	fclose(save);
	save = fopen("2048InC.sav", "w");
	if(score == 0){
		newGame();
	}
    srand(time(NULL));
    InitWindow(window_width, window_height, window_title);
    SetTargetFPS(60);
    SetExitKey(KEY_NULL);
    resource_all_load();
    SetWindowIcon(resources.textures.misc.icon);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground((Color){244, 226, 198, 255});
        if(intro()){
            if(menu_pressed_play){
                initGame();
            }
            else{
                gui_menu();
            }
        }
        EndDrawing();
    }
	exit_game();
}
