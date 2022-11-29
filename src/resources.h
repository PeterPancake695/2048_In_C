#include "game.h"

struct Resources{
    struct Textures{
        struct Tiles{
            Texture2D tile2;
            Texture2D tile4;
            Texture2D tile8;
            Texture2D tile16;
            Texture2D tile32;
            Texture2D tile64;
            Texture2D tile128;
            Texture2D tile256;
            Texture2D tile512;
            Texture2D tile1024;
            Texture2D tile2048;
            Texture2D tile4096;
            Texture2D tile8192;
        }tiles;

        struct Game{
            Texture2D back;
            Texture2D white;
        }game;

        Texture2D transparent;
    }textures;

    struct Fonts{
        Font arial;
    }fonts;
}resources;