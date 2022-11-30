#pragma once
#include "game.h"
#include "resources.h"
#include "gui/gui.c"
#include "intro.h"

void init(){
    srand(time(NULL));
    InitWindow(window_width, window_height, window_title);
    SetTargetFPS(60);
    SetExitKey(KEY_NULL);
    resource_all_load();
    SetWindowIcon(resources.textures.misc.icon);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground((Color){244, 226, 198, 255});
        DrawFPS(0,0);
        if(intro()){
            gui_menu_logo();
        }
        EndDrawing();
    }
    CloseWindow();
    resource_all_unload();
}