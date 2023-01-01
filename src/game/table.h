#include "game.h"

// draws tiles 
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

// draws the tile backround
void drawTilePad(){
    DrawTextureEx(resources.textures.game.back, (Vector2){120, 120}, 0, 2, WHITE);
}
