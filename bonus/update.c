/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** update.c
*/

#include "my.h"

static void script(game_t *game)
{
    cs_event_window_close(game->event, game->window);
}

void update(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window, &game->event))
        script(game);
}
