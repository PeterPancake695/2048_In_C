#include "resources.h"

// initializes variables
bool intro_finished_init = false;
bool intro_finished_wait = false;
bool intro_finished_final = false;
double intro_opacity = 0;

// initial intro sequence
void intro_init(){
    DrawTextureEx(resources.textures.misc.PeterPancake666, (Vector2){180,100}, 0, 0.5, (Color){255, 255, 255, intro_opacity});
    DrawTextEx(resources.fonts.roboto, "Made by PeterPancake666", (Vector2){155, 475}, 30, 5, (Color){255, 255, 255, intro_opacity});
    DrawTextEx(resources.fonts.roboto, "(https://github.com/PeterPancake666)", (Vector2){55, 515}, 30, 5, (Color){255, 255, 255, intro_opacity});
    
    if(intro_opacity <= 255){
        intro_opacity = 150*GetTime()-45;
    }
    else{
        intro_finished_init = true;
    }
}

// second intro sequence
void intro_wait(){
    DrawTextureEx(resources.textures.misc.PeterPancake666, (Vector2){180,100}, 0, 0.5, WHITE);
    DrawTextEx(resources.fonts.roboto, "Made by PeterPancake666", (Vector2){155, 475}, 30, 5, WHITE);
    DrawTextEx(resources.fonts.roboto, "(https://github.com/PeterPancake666)", (Vector2){55, 515}, 30, 5, WHITE);
    if(GetTime() > 5){
        intro_finished_wait = true;
    }
}

// final intro sequence
void intro_final(){
    DrawTextureEx(resources.textures.misc.PeterPancake666, (Vector2){180,100}, 0, 0.5, (Color){255, 255, 255, intro_opacity});
    DrawTextEx(resources.fonts.roboto, "Made by PeterPancake666", (Vector2){155, 475}, 30, 5, (Color){255, 255, 255, intro_opacity});
    DrawTextEx(resources.fonts.roboto, "(https://github.com/PeterPancake666)", (Vector2){55, 515}, 30, 5, (Color){255, 255, 255, intro_opacity});
    
    if(intro_opacity > 0){
        intro_opacity = 255-150*(GetTime()-5);
    }
    else{
        intro_finished_final = true;
    }
}

// initializes intro sequence
int intro(){
    if(intro_finished_init && intro_finished_wait && intro_finished_final){
        return 1;
    }
    if(!intro_finished_init){
        intro_init();
    }
    if(intro_finished_init && !intro_finished_wait){
        intro_wait();
    }
    if(intro_finished_init && intro_finished_wait && !intro_finished_final){
        intro_final();
    }
    return 0;
}
