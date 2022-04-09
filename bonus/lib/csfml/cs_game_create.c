/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** cs_game_create.c
*/

#include "my.h"

game_t *cs_game_create(int width, int height, int fps, char *name)
{
    game_t *new = malloc(sizeof(game_t));
    int nbr_of_obj = 1;

    new->window = cs_window_create(name, width, height, fps);
    new->obj = malloc(sizeof(game_obj_t) * (nbr_of_obj + 1));
    for (int i = 0; i < nbr_of_obj; i++) {
        new->obj[i].is_obj = true;
        new->obj[i].pos = malloc(sizeof(sfVector2f) * 9217);
        for (int j = 0; j < 9217; j++)
            new->obj[i].pos[j] = (sfVector2f){-1, -1};
    }
    new->obj[nbr_of_obj].is_obj = false;
    new->mode = start_mode;
    return new;
}
