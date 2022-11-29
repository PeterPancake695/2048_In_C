#pragma once
#include "game.h"

// Required Resources
struct Resources{
    // Game Textures
    struct Textures{

        // Tile Textures
        struct Tiles{
            Texture2D tile2;
            Texture2D tile4;
            Texture2D tile8;
            Texture2D tile16;
            Texture2D tile32;
            Texture2D tile64;
            Texture2D tile128;
            Texture2D tile256;
            Texture2D tile512;
            Texture2D tile1024;
            Texture2D tile2048;
            Texture2D tile4096;
            Texture2D tile8192;
        }tiles;

        // Game Textures
        struct Game{
            Texture2D back;
            Texture2D white;
        }game;

        // Miscellaneous textures
        struct Misc{
            Texture2D transparent;
            Image icon;
        }misc;
    }textures;

    struct Fonts{
        Font arial;
    }fonts;
}resources;


// Loads tile textures
void resource_texture_tile_load(){
    resources.textures.tiles.tile2 = LoadTexture("res/textures/tiles/2.png");
    resources.textures.tiles.tile4 = LoadTexture("res/textures/tiles/4.png");
    resources.textures.tiles.tile8 = LoadTexture("res/textures/tiles/8.png");
    resources.textures.tiles.tile16 = LoadTexture("res/textures/tiles/16.png");
    resources.textures.tiles.tile32 = LoadTexture("res/textures/tiles/32.png");
    resources.textures.tiles.tile64 = LoadTexture("res/textures/tiles/64.png");
    resources.textures.tiles.tile128 = LoadTexture("res/textures/tiles/128.png");
    resources.textures.tiles.tile256 = LoadTexture("res/textures/tiles/256.png");
    resources.textures.tiles.tile512 = LoadTexture("res/textures/tiles/512.png");
    resources.textures.tiles.tile1024 = LoadTexture("res/textures/tiles/1024.png");
    resources.textures.tiles.tile2048 = LoadTexture("res/textures/tiles/2048.png");
    resources.textures.tiles.tile4096 = LoadTexture("res/textures/tiles/4096.png");
    resources.textures.tiles.tile8192 = LoadTexture("res/textures/tiles/8192.png");
}

// Unloads tile textures
void resource_texture_tile_unload(){
    UnloadTexture(resources.textures.tiles.tile2);
    UnloadTexture(resources.textures.tiles.tile4);
    UnloadTexture(resources.textures.tiles.tile8);
    UnloadTexture(resources.textures.tiles.tile16);
    UnloadTexture(resources.textures.tiles.tile32);
    UnloadTexture(resources.textures.tiles.tile64);
    UnloadTexture(resources.textures.tiles.tile128);
    UnloadTexture(resources.textures.tiles.tile256);
    UnloadTexture(resources.textures.tiles.tile512);
    UnloadTexture(resources.textures.tiles.tile1024);
    UnloadTexture(resources.textures.tiles.tile2048);
    UnloadTexture(resources.textures.tiles.tile4096);
    UnloadTexture(resources.textures.tiles.tile8192);
}

// Loads game textures 
void resource_texture_game_load(){
    resources.textures.game.back = LoadTexture("res/textures/game/back.png");
    resources.textures.game.white = LoadTexture("res/textures/game/white.png");
}

// Unloads game textures
void resource_texture_game_unload(){
    UnloadTexture(resources.textures.game.back);
    UnloadTexture(resources.textures.game.white);
}

// Loads miscellaneous textures
void resource_texture_misc_load(){
    resources.textures.misc.transparent = LoadTexture("res/textures/misc/transparent.png");
    resources.textures.misc.icon = LoadImage("res/textures/misc/icon.png");
}

// Unloads miscellaneous textures
void resource_texture_misc_unload(){
    UnloadTexture(resources.textures.misc.transparent);
    UnloadImage(resources.textures.misc.icon);
}

// Loads fonts
void resource_font_load(){
    resources.fonts.arial = LoadFont("res/fonts/arial.ttf");
}

// Unloads fonts
void resource_font_unload(){
    UnloadFont(resources.fonts.arial);
}

// Loads all textures
void resource_texture_load(){
    resource_texture_misc_load();
    resource_texture_game_load();
    resource_texture_tile_load();
}

// Unloads all textures
void resource_texture_unload(){
    resource_texture_misc_unload();
    resource_texture_game_unload();
    resource_texture_tile_unload();
}

// Loads all resources
void resource_all_load(){
    resource_font_load();
    resource_texture_load();
}

// Unloads all resources
void resource_all_unload(){
    resource_font_unload();
    resource_texture_unload();
}