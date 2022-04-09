/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** cs_window_create.c
*/

#include "my.h"

sfRenderWindow *cs_window_create(char *name, int widht, int height, int fps)
{
    sfRenderWindow *window;
    sfVideoMode mode;

    mode = (sfVideoMode){widht, height, 32};
    window = sfRenderWindow_create(mode, name, sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, fps);
    return window;
}
