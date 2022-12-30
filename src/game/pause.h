#include "score.h"

bool gamePaused = false;

void gui_game_pause_draw(){
	DrawRectangle(0,0,720,720, (Color){0, 0, 0, 175});
	DrawTextEx(resources.fonts.roboto, "Game paused", (Vector2){120, 250}, 90, 5, WHITE);
	gui_game_play_button();
	gui_menu_exit_button();
	if(game_pressed_play == true){
		gamePaused = false;
		game_pressed_play_hold = false;
		game_pressed_play = false;
		newGame();
	}
}

void gui_game_pause_input(){
	if(IsKeyPressed(KEY_ESCAPE)){
		gamePaused--;
	}
}
