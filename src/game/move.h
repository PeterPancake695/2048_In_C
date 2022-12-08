#include "random.h"

int canMove(int line, int column, int nextLine, int nextColumn){
    if((tiles[line][column] == 0 && tiles[nextLine][nextColumn] == 0) ||nextLine < 0 || nextColumn < 0 || nextLine > 3 || nextColumn > 3 || (tiles[line][column] != tiles[nextLine][nextColumn] && tiles[nextLine][nextColumn] != 0)){
        return 0;
    }
    return 1;
}

void move(int dir){
    int startLine = 0, startColumn = 0, lineStep = 1, columnStep = 1, i2, j2;
    if(dir == 0){
        startLine = 3;
        lineStep = -1;
    }
    if(dir == 1){
        startColumn = 3;
        columnStep = -1;
    }
    _Bool movePossible = 1, canRandom = 0;
    while (movePossible){
        for(int i = startLine; i >= 0 && i < 4; i += lineStep){
            for(int j = startColumn; j >= 0 && j < 4; j += columnStep){
                movePossible = 0;
                i2 = i + dirLine[dir];
                j2 = j + dirColumn[dir];
                if(canMove(i, j, i2, j2)){
                    tiles[i2][j2] += tiles[i][j];
                    tiles[i][j] = 0;
                    canRandom = 1;
                    movePossible = 1;
                }
            }
        }
    }
    movePossible = 1;
    while (movePossible){
        for(int i = startLine; i >= 0 && i < 4; i += lineStep){
            for(int j = startColumn; j >= 0 && j < 4; j += columnStep){
                movePossible = 0;
                i2 = i + dirLine[dir];
                j2 = j + dirColumn[dir];
                if(canMove(i, j, i2, j2)){
                    tiles[i2][j2] += tiles[i][j];
                    tiles[i][j] = 0;
                    canRandom = 1;
                    movePossible = 1;
                }
            }
        }
    }
    movePossible = 1;
    while (movePossible){
        for(int i = startLine; i >= 0 && i < 4; i += lineStep){
            for(int j = startColumn; j >= 0 && j < 4; j += columnStep){
                movePossible = 0;
                i2 = i + dirLine[dir];
                j2 = j + dirColumn[dir];
                if(canMove(i, j, i2, j2)){
                    tiles[i2][j2] += tiles[i][j];
                    tiles[i][j] = 0;
                    canRandom = 1;
                    movePossible = 1;
                }
            }
        }
    }
    if(canRandom){
        random();
    }
}