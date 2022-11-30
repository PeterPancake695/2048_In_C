#include "gui.h"

void gui_menu_logo_rotation(){
    if(menu_rotation <= -10){
        menu_rotation_negative = 1;
    }
    if(menu_rotation >= 10){
        menu_rotation_negative = -1;
    }
    menu_rotation += 1.0/GetFPS()*30.0*(float)menu_rotation_negative;
}

void gui_menu_logo(){
    gui_menu_logo_rotation();
    DrawTexturePro(resources.textures.gui.logo, (Rectangle){0, 0, 300, 100}, (Rectangle){360, 155,600,200}, (Vector2){300, 100}, menu_rotation, WHITE);
}