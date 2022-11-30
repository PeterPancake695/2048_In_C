#pragma once
#include "game.h"
#include "resources.h"
#include "gui/gui.c"

void init(){
    srand(time(NULL));
    InitWindow(window_width, window_height, window_title);
    SetTargetFPS(60);
    resource_all_load();
    SetWindowIcon(resources.textures.misc.icon);
    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground((Color){244, 226, 198, 255});
        DrawFPS(0,0);
        intro();
        EndDrawing();
    }
    CloseWindow();
    resource_all_unload();
}