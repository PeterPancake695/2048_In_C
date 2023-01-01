#include "score.h"

bool gamePaused = false;
bool game_pressed_pause = false;
bool game_pressed_pause_hold = false;

void gui_game_pause_button(){
	if(10 <= GetMouseX() && GetMouseX() <= 110 && 60 <= GetMouseY() && GetMouseY() <= 160){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            DrawTexturePro(resources.textures.gui.pause_clicked, (Rectangle){0, 0, 20, 20}, (Rectangle){10, 60, 100, 100}, (Vector2){0, 0}, 0, WHITE);
            game_pressed_pause_hold = true;
        }
        else if(game_pressed_pause_hold){
            game_pressed_pause = true;	
        }
        else{
            DrawTexturePro(resources.textures.gui.pause_hover, (Rectangle){0, 0, 20, 20}, (Rectangle){10, 60, 100, 100}, (Vector2){0,0}, 0, WHITE);
        }
    }
    else{
        DrawTexturePro(resources.textures.gui.pause_normal, (Rectangle){0, 0, 20, 20}, (Rectangle){10, 60, 100, 100}, (Vector2){0,0}, 0, WHITE);
    }

}

void gui_game_pause_draw(){
	DrawRectangle(0,0,720,720, (Color){0, 0, 0, 175});
	DrawTextEx(resources.fonts.roboto, "Game paused", (Vector2){120, 250}, 90, 5, BLACK);
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
