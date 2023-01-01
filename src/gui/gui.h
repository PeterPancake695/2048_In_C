#pragma once
#include "../resources.h"

// initializes variables
double menu_rotation = 0;
int menu_rotation_negative = 1;
bool menu_pressed_exit = false;
bool menu_pressed_play_hold = false;
bool menu_pressed_play = false;
bool game_pressed_play_hold = false;
bool game_pressed_play = false;

// prerequisite actions before exiting
void exit_game(){
	CloseWindow();
    resource_all_unload();
	file_save_write();
	fclose(save);
}
