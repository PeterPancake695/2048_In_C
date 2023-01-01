#include "../gui/gui.c"

// initializes variables
short int dirLine[4] = {1, 0, -1, 0};
short int dirColumn[4] = {0, 1, 0, -1};

float wincolor = 0;
float losecolor = 0;

bool gameWon = false;
bool gameLost = false;

// generates random tiles
void generate(){
    int i = rand() % 4;
    int j = rand() % 4;
    while (tiles[i][j] > 0){
        i = rand() % 4;
        j = rand() % 4;
    }
    tiles[i][j] = 2;
}

// starts a new game
void newGame(){
	score = 0;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            tiles[i][j] = 0;
        }
    }
    generate();
    generate();
}
