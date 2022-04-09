/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** cs_game_destroy.c
*/

#include "my.h"

void cs_game_destroy(game_t *game)
{
    for (int i = 0; game->obj[i].is_obj; i++) {
        sfSprite_destroy(game->obj[i].sprite);
        free(game->obj[i].pos);
    }
    sfRenderWindow_destroy(game->window);
    system("rm -rf data/maze_map.txt");
    system("make fclean -C ../ && clear");
    for (int i = 0; game->maze[i]; i++)
        free(game->maze[i]);
    free(game->maze);
}
