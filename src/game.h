// including libraries
#pragma once
#include "../include/raylib.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

// initializes variables
#ifndef __GAME_H_
#define __GAME_H_

const short unsigned int window_height = 720;
const short unsigned int window_width = 720;
const char window_title[10] = "2048 In C";

int score;
int highscore;
int tiles[4][4];

FILE *save;

#endif

// reads save file
void file_save_read(){
	fscanf(save, "%d", &score);
	fscanf(save, "%d", &highscore);
	for(int i = 0; i <= 3; i++){
		for(int j = 0; j <= 3; j++){
			fscanf(save, "%d", &tiles[i][j]);
		}
	}
}

// writes save file
void file_save_write(){
	fprintf(save, "%d %d ", score, highscore);
	for(int i = 0; i <= 3; i++){
		for(int j = 0; j <= 3; j++){
			fprintf(save, "%d ", tiles[i][j]);
		}
	}
}
