/*
** EPITECH PROJECT, 2021
** dante
** File description:
** check_maze.c
*/

#include "generator.h"

int the_maze_is_not_perfect(maze_t maze)
{
    int var = -2;

    for (int i = 0; i < maze.max; i++) {
        if (0 < maze.map[i] && var < 0)
            var = maze.map[i];
        if (maze.map[i] != var && maze.map[i] > 0)
            return 1;
    }
    return 0;
}
