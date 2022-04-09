/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** cs_event_window_close.c
*/

#include "my.h"

void cs_event_window_close(sfEvent event, sfRenderWindow *window)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}
