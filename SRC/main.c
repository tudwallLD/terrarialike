/*
** FRIENDS PROJET, 2024
** MY_LS
** File description:
** The file is main fonction
** les concernant
*/
#include "my.h"
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Network.h>

int main(void)
{
    /*initialisation de la fenetre*/
    sfRenderWindow *window;
    sfVideoMode mode = {1500, 800, 64};

    /*sfTime */

    /*initialisation pointeur texture*/
    sfTexture *texture;
    sfTexture *texmenu;
    sfTexture *texlittlemenu;
    sfTexture *texlittlemenu2;
    /**********************************/
    sfTexture *background;
    sfTexture *backgroundavant;

    /*initialisation des sprites*/
    sfSprite *sprite;
    sfSprite *spritemenu;
    sfSprite *spritelittlemenu;
    sfSprite *spritelittlemenu2;
    /**********************************/
    sfSprite *spritebackground;
    sfSprite *spritebackgroundavant;

    /*initialisation event*/
    sfEvent event;

    /*initialisation des vecteur*/
    sfVector2f vector;
    sfVector2f vectorboutonmenu;
    sfVector2f vectorboutonmenu2;
    sfVector2i mouse;

    /*font et music*/
    sfFont *font;
    sfMusic *music;
    sfMusic *musicbouton;

    /*initialisation des valeurs des vecteur*/
    vector.x=500;
    vector.y=250;
    vectorboutonmenu.x=600;
    vectorboutonmenu.y=350;
    
    window = sfRenderWindow_create(mode, "TerrariaLike", sfResize | sfClose, NULL);
    music = sfMusic_createFromFile("SRC/sound/11.wav");
    musicbouton = sfMusic_createFromFile("SRC/sound/bruit_de_clic.wav");

    sfMusic_play(music);

    /*initailisation des elements du menu*/

    texture = sfTexture_createFromFile("SRC/assets/layers/dernier_plant_flou.png", NULL);
    texmenu = sfTexture_createFromFile("SRC/assets/layers/menu.png", NULL);
    texlittlemenu = sfTexture_createFromFile("SRC/assets/layers/box.png", NULL);
    texlittlemenu2 = sfTexture_createFromFile("SRC/assets/layers/box_lit.png", NULL);
    sprite = sfSprite_create();
    spritemenu = sfSprite_create();
    spritelittlemenu = sfSprite_create();
    spritelittlemenu2 = sfSprite_create();
    spritebackgroundavant = sfSprite_create();

    /*initailisation des elements du jeu*/
    background = sfTexture_createFromFile("SRC/assets/layers/dernier_plant.png", NULL);
    backgroundavant = sfTexture_createFromFile("SRC/assets/layers/premier_plant.png", NULL);
    spritebackgroundavant = sfSprite_create();
    spritebackground = sfSprite_create();

    /*création des sprite a partir des texture du menu*/

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTexture(spritemenu, texmenu, sfTrue);
    sfSprite_setTexture(spritelittlemenu, texlittlemenu, sfTrue);
    sfSprite_setTexture(spritelittlemenu2, texlittlemenu2, sfTrue);
    sfSprite_setPosition(spritemenu,vector);
    sfSprite_setPosition(spritelittlemenu,vectorboutonmenu);
    sfSprite_setPosition(spritelittlemenu2,vectorboutonmenu);

    /*création des sprite a partir des texture du jeu*/
    sfSprite_setTexture(spritebackground, background, sfTrue);
    sfSprite_setTexture(spritebackgroundavant, backgroundavant, sfTrue);

    int value = 0;
    while (sfRenderWindow_isOpen(window)) {
        mouse = sfMouse_getPositionRenderWindow(window);

        if (value == 0) {
            sfRenderWindow_clear(window, sfBlack);
            sfRenderWindow_drawSprite(window, sprite, NULL);
            sfRenderWindow_drawSprite(window, spritemenu, NULL);
            sfRenderWindow_drawSprite(window, spritelittlemenu, NULL);
            if (mouse.x >= vectorboutonmenu.x && mouse.x <= vectorboutonmenu.x + 290) {
                if (mouse.y >= vectorboutonmenu.y && mouse.y <= vectorboutonmenu.y + 40) {
                    sfRenderWindow_drawSprite(window, spritelittlemenu2, NULL);
                }
            }
        }
        if (value == 1) {
            sfRenderWindow_clear(window, sfBlack);
            sfRenderWindow_clear(window, sfBlack);
            sfRenderWindow_drawSprite(window, spritebackground, NULL);
            sfRenderWindow_drawSprite(window, spritebackgroundavant, NULL);

        }

        if (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtMouseButtonPressed) {
                if (mouse.x >= vectorboutonmenu.x && mouse.x <= vectorboutonmenu.x + 290) {
                    if (mouse.y >= vectorboutonmenu.y && mouse.y <= vectorboutonmenu.y + 40) {
                        sfMusic_play(musicbouton);
                        value = value + 1;
                    }
                }
            }

            if(event.type == sfEvtClosed) {
                sfRenderWindow_close(window);
            }
            if(event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape && value == 0) {
            sfRenderWindow_close(window);
            }
        }    
        sfRenderWindow_display(window);
    }
    sfMusic_destroy(music);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
    sfRenderWindow_destroy(window);    
    return(EXIT_SUCCESS);
}
