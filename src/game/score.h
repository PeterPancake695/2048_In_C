#include "winlose.h"

// draws score
void game_draw_score(){
	DrawTextEx(resources.fonts.roboto, TextFormat("Score: %d | High-Score: %d", score, highscore), (Vector2){10, 10}, 45, 5, BLACK);
}

// checks highscore
void check_highscore(){
	if(highscore < score){
		highscore = score;
	}
}
