#include "gui.h"

// sets logo rotation
void gui_menu_logo_rotation(){
    if(menu_rotation <= -10){
        menu_rotation_negative = 1;
    }
    if(menu_rotation >= 10){
        menu_rotation_negative = -1;
    }
    menu_rotation += 1.0/GetFPS()*5.0*(float)menu_rotation_negative;
}

// draws logo
void gui_menu_logo(){
    gui_menu_logo_rotation();
    DrawTexturePro(resources.textures.gui.logo, (Rectangle){0, 0, 300, 100}, (Rectangle){360, 155,600,200}, (Vector2){300, 100}, menu_rotation, WHITE);
}

// draws exit button and makes it use-able
void gui_menu_exit_button(){
    if(285 <= GetMouseX() && GetMouseX() <= 435 && 550 <= GetMouseY() && GetMouseY() <= 650){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            DrawTexturePro(resources.textures.gui.exit_clicked, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 600, 150, 100}, (Vector2){75,50}, 0, WHITE);
            menu_pressed_exit = true;
        }
        else if(menu_pressed_exit){
			PlaySound(resources.sounds.press);
			exit_game();
            exit(0);
        }
        else{
            DrawTexturePro(resources.textures.gui.exit_hover, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 600, 150, 100}, (Vector2){75,50}, 0, WHITE);
        }
    }
    else{
        DrawTexturePro(resources.textures.gui.exit_normal, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 600, 150, 100}, (Vector2){75,50}, 0, WHITE);
    }
}

// draws play button and makes it use-able
void gui_menu_play_button(){
    if(285 <= GetMouseX() && GetMouseX() <= 435 && 400 <= GetMouseY() && GetMouseY() <= 500){
        if(IsMouseButtonDown(MOUSE_BUTTON_LEFT)){
            DrawTexturePro(resources.textures.gui.play_clicked, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 450, 150, 100}, (Vector2){75,50}, 0, WHITE);
            menu_pressed_play_hold = true;
        }
        else if(menu_pressed_play_hold){
			PlaySound(resources.sounds.press);
            menu_pressed_play = true;
        }
        else{
            DrawTexturePro(resources.textures.gui.play_hover, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 450, 150, 100}, (Vector2){75,50}, 0, WHITE);
        }
    }
    else{
        DrawTexturePro(resources.textures.gui.play_normal, (Rectangle){0, 0, 30, 20}, (Rectangle){360, 450, 150, 100}, (Vector2){75,50}, 0, WHITE);
    }
}

// initializes buttons
void gui_menu_buttons(){
    gui_menu_exit_button();
    gui_menu_play_button();
}
