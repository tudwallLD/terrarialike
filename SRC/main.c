/*
** EPITECH PROJET, 2022
** MY_LS
** File description:
** The file is main fonction
** les concernant
*/
#include "my.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Network.h>

int main(int argc, char** argv)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1500, 800, 64};
    sfEvent event;
    int val = 0;

    window = sfRenderWindow_create(mode, "My_paint", sfResize | sfClose, NULL);

    while (sfRenderWindow_isOpen(window))
    {
        //sfMouse_setPositionRenderWindow();
        //sfMouse_getPositionRenderWindow();
        if (sfRenderWindow_pollEvent(window, &event))
        {
        }
        if (event.type == sfEvtClosed)
        {
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyEscape)
        {
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtMouseButtonPressed && event.mouseButton.button == sfMouseRight)
        {
            printf("AHHHH");
            val = 1;
        }
        if (event.type == sfEvtMouseMoved)
            printf("BHHHHHH");
        //if (event.type == sfEvtMouseMoved)
            //printf("BHHHH");
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
  return(0);
}
