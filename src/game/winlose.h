#include "table.h"

// checks if the tiles can move to that position
int canMove(int line, int column, int nextLine, int nextColumn){
    if((tiles[line][column] == 0 && tiles[nextLine][nextColumn] == 0) ||nextLine < 0 || nextColumn < 0 || nextLine > 3 || nextColumn > 3 || (tiles[line][column] != tiles[nextLine][nextColumn] && tiles[nextLine][nextColumn] != 0)){
        return 0;
    }
    return 1;
}

// checks if it can move in one direction
int LoseCheck_oneDir(int dir){
    int startLine = 0, startColumn = 0, lineStep = 1, columnStep = 1, i2, j2;
    if(dir == 0){
        startLine = 3;
        lineStep = -1;
    }
    if(dir == 1){
        startColumn = 3;
        columnStep = -1;
    }
    bool movePossible = 1;
    while (movePossible){
        for(int i = startLine; i >= 0 && i < 4; i += lineStep){
            for(int j = startColumn; j >= 0 && j < 4; j += columnStep){
                movePossible = 0;
                i2 = i + dirLine[dir];
                j2 = j + dirColumn[dir];
                if(canMove(i, j, i2, j2)){
                    movePossible = 1;
                    return 0;
                }
            }
        }
    }
    return 1;
}

// draws win screen
void win(){
    DrawTextureEx(resources.textures.game.white, (Vector2){120, 120}, 0, 2, (Color){0, 232, 31, wincolor});
    DrawTextEx(resources.fonts.roboto, "You won!", (Vector2){105, 255}, 150, 2, BLACK);
    gameWon = true;
    gui_game_play_button();
    if(wincolor <= 85){
        wincolor += 1.0/GetFPS()*30.0;
    }
    if(game_pressed_play == true){
        gameWon = false;
        newGame();
    }
}

// draws lose screen
void lose(){
    DrawTextureEx(resources.textures.game.white, (Vector2){120, 120}, 0, 2, (Color){235, 0, 0, losecolor});
    DrawTextEx(resources.fonts.roboto, "Game over!", (Vector2){30, 255}, 150, 2, BLACK);
    gameLost = true;
    gui_game_play_button();
    if(losecolor <= 85){
        losecolor += 1.0/GetFPS()*30.0;
    }
    if(game_pressed_play == true){
        gameLost = false;
        newGame();
    }
}

// checks if you lost
void LoseCheck(){
    if(LoseCheck_oneDir(0) && LoseCheck_oneDir(1) && LoseCheck_oneDir(2) && LoseCheck_oneDir(3)){
        lose();
    }
}

// checks if you won
void WinCheck(){
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            if(tiles[i][j] == 8192){
                win();
            }
        }
    }
}
