#pragma once
#include "game.h"
#include "resources.h"
#include "gui/gui.c"

void init(){
    srand(time(NULL));
    resource_all_load();
    InitWindow(window_width, window_height, window_title);
    SetTargetFPS(60);
    SetWindowIcon(resources.textures.misc.icon);
    while (!WindowShouldClose()){
        BeginDrawing();
            ClearBackground((Color){244, 226, 198, 255});
        EndDrawing();
    }
    CloseWindow();
    resource_all_unload();
}