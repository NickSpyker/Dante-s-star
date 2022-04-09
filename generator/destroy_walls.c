/*
** EPITECH PROJECT, 2021
** dante
** File description:
** destroy_walls.c
*/

#include "generator.h"

void destroy_walls(maze_t *maze)
{
    int max = maze->height + maze->width * 1.5;
    int val = 0;

    for (int i = 0; i < max; i++) {
        while (maze->map[val] > 0)
            val = get_random_nbr(maze->max - 1);
        maze->map[val] = '1';
    }
}
