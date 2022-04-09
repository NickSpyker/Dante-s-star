/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** start.c
*/

#include "my.h"

static void add_wall(char c, sfVector2f *pos, int i, int j)
{
    if (c != 'X')
        return;
    *pos = (sfVector2f){j * 10, i * 10};
}

static void fill_walls_pos(sfVector2f *pos, char **maze)
{
    int count = 0;

    for (int i = 0; maze[i]; i++)
        for (int j = 0; maze[i][j]; j++)
            add_wall(maze[i][j], &pos[count++], i, j);
}

void start(game_t *game)
{
    float wall_re_size = 0.01953125;

    sfSprite_setScale(game->obj[0].sprite, \
    (sfVector2f){wall_re_size, wall_re_size});
    fill_walls_pos(game->obj[0].pos, game->maze);
    game->mode = update_mode;
}
