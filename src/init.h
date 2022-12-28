#pragma once
#include "game.h"
#include "game/game.c"
#include "intro.h"

void init(){
    srand(time(NULL));
    InitWindow(window_width, window_height, window_title);
    SetTargetFPS(60);
    SetExitKey(KEY_NULL);
    resource_all_load();
    SetWindowIcon(resources.textures.misc.icon);
    newGame();
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
    CloseWindow();
    resource_all_unload();
}