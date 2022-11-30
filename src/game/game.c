#include "game.h"

void random(){
    int i = rand() % 4;
    int j = rand() % 4;
    while (tiles[i][j] > 0){
        i = rand() % 4;
        j = rand() % 4;
    }
    tiles[i][j] = 2;
}

void printTable(){
    int i, j;
    for(i = 0; i <= 3; i++){
        for(j = 0; j <= 3; j++){
            switch(tiles[i][j]){
                case 2:
                    DrawTextureEx(resources.textures.tiles.tile2, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 4:
                    DrawTextureEx(resources.textures.tiles.tile4, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 8:
                    DrawTextureEx(resources.textures.tiles.tile8, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 16:
                    DrawTextureEx(resources.textures.tiles.tile16, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 32:
                    DrawTextureEx(resources.textures.tiles.tile32, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 64:
                    DrawTextureEx(resources.textures.tiles.tile64, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 128:
                    DrawTextureEx(resources.textures.tiles.tile128, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 256:
                    DrawTextureEx(resources.textures.tiles.tile256, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 512:
                    DrawTextureEx(resources.textures.tiles.tile512, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 1024:
                    DrawTextureEx(resources.textures.tiles.tile1024, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 2048:
                    DrawTextureEx(resources.textures.tiles.tile2048, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 4096:
                    DrawTextureEx(resources.textures.tiles.tile4096, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                case 8192:
                    DrawTextureEx(resources.textures.tiles.tile8192, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
                default:
                    DrawTextureEx(resources.textures.misc.transparent, (Vector2){136+j*120, 136+i*120}, 0, 1.07, WHITE);
                    break;
            }
        }
    }
}

void newGame(){
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            tiles[i][j] = 0;
        }
    }
    random();
    random();
}

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

void drawTilePad(){
    DrawTextureEx(resources.textures.game.back, (Vector2){120, 120}, 0, 2, WHITE);
}

void keyPress(){
    if(IsKeyPressed(KEY_UP)){
        move(2);
    }
    if(IsKeyPressed(KEY_LEFT)){
        move(3);
    }
    if(IsKeyPressed(KEY_DOWN)){
        move(0);
    }
    if(IsKeyPressed(KEY_RIGHT)){
        move(1);
    }
}

void initGame(){
    drawTilePad();
    keyPress();
	printTable();
}
