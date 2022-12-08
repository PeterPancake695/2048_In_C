#include "table.h"

void random(){
    int i = rand() % 4;
    int j = rand() % 4;
    while (tiles[i][j] > 0){
        i = rand() % 4;
        j = rand() % 4;
    }
    tiles[i][j] = 2;
}