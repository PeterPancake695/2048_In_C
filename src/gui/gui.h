#pragma once
#include "../resources.h"

double menu_rotation = 0;
int menu_rotation_negative = 1;
bool menu_pressed_exit = false;
bool menu_pressed_play_hold = false;
bool menu_pressed_play = false;
bool game_pressed_play_hold = false;
bool game_pressed_play = false;

void exit_game(){
	CloseWindow();
    resource_all_unload();
	file_save_write();
	fclose(save);
}
