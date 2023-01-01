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
            Texture2D PeterPancake666;
        }misc;

        // Gui textures
        struct Gui{
            Texture2D logo;
            Texture2D exit_clicked;
            Texture2D exit_hover;
            Texture2D exit_normal;
            Texture2D play_clicked;
            Texture2D play_hover;
            Texture2D play_normal;
			Texture2D pause_clicked;
			Texture2D pause_hover;
			Texture2D pause_normal;
        }gui;
    }textures;

	// fonts
    struct Fonts{
        Font roboto;
    }fonts;
	
	// sounds
	struct Sounds{
		Sound merge;
		Sound move;
		Sound press;
	}sounds;

	Music music;
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
    resources.textures.misc.PeterPancake666 = LoadTexture("res/textures/misc/PeterPancake666.png");
}

// Unloads miscellaneous textures
void resource_texture_misc_unload(){
    UnloadTexture(resources.textures.misc.transparent);
    UnloadImage(resources.textures.misc.icon);
    UnloadTexture(resources.textures.misc.PeterPancake666);
}

// Loads gui textures
void resource_texture_gui_load(){
    resources.textures.gui.logo = LoadTexture("res/textures/gui/logo.png");
    resources.textures.gui.exit_clicked = LoadTexture("res/textures/gui/exit-clicked.png");
    resources.textures.gui.exit_hover = LoadTexture("res/textures/gui/exit-hover.png");
    resources.textures.gui.exit_normal = LoadTexture("res/textures/gui/exit-normal.png");
    resources.textures.gui.play_clicked = LoadTexture("res/textures/gui/play-clicked.png");
    resources.textures.gui.play_hover = LoadTexture("res/textures/gui/play-hover.png");
    resources.textures.gui.play_normal = LoadTexture("res/textures/gui/play-normal.png");
	resources.textures.gui.pause_clicked = LoadTexture("res/textures/gui/pause-clicked.png");
	resources.textures.gui.pause_hover = LoadTexture("res/textures/gui/pause-hover.png");
	resources.textures.gui.pause_normal = LoadTexture("res/textures/gui/pause-normal.png");
}

// Unloads gui textures
void resource_texture_gui_unload(){
    UnloadTexture(resources.textures.gui.logo);
    UnloadTexture(resources.textures.gui.exit_clicked);
    UnloadTexture(resources.textures.gui.exit_hover); 
    UnloadTexture(resources.textures.gui.exit_normal );
    UnloadTexture(resources.textures.gui.play_clicked);
    UnloadTexture(resources.textures.gui.play_hover);
    UnloadTexture(resources.textures.gui.play_normal);
	UnloadTexture(resources.textures.gui.pause_clicked);
	UnloadTexture(resources.textures.gui.pause_hover);
	UnloadTexture(resources.textures.gui.pause_normal);
}

// Loads fonts
void resource_font_load(){
    resources.fonts.roboto = LoadFont("res/fonts/Roboto-Black.ttf");
}

// Unloads fonts
void resource_font_unload(){
    UnloadFont(resources.fonts.roboto);
}

// Loads sounds
void resource_sounds_load(){
	resources.sounds.merge = LoadSound("res/sounds/merge.wav");
	resources.sounds.move = LoadSound("res/sounds/move.wav");
	resources.sounds.press = LoadSound("res/sounds/press.wav");
}

// Unloads sounds
void resource_sounds_unload(){
	UnloadSound(resources.sounds.merge);
	UnloadSound(resources.sounds.move);
	UnloadSound(resources.sounds.press);
}

// Loads all textures
void resource_texture_load(){
    resource_texture_misc_load();
    resource_texture_game_load();
    resource_texture_tile_load();
    resource_texture_gui_load();
}

// Unloads all textures
void resource_texture_unload(){
    resource_texture_misc_unload();
    resource_texture_game_unload();
    resource_texture_tile_unload();
    resource_texture_gui_unload();
}

// Loads all resources
void resource_all_load(){
    resource_font_load();
    resource_texture_load();
	resource_sounds_load();
	resources.music = LoadMusicStream("res/sounds/music.mp3");
}

// Unloads all resources
void resource_all_unload(){
    resource_font_unload();
    resource_texture_unload();
	resource_sounds_unload();
	UnloadMusicStream(resources.music);
}
