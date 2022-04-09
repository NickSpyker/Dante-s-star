/*
** EPITECH PROJECT, 2021
** dante
** File description:
** check_if_valid_coord.c
*/

#include "generator.h"

static int add_check(maze_t maze, int x, int y)
{
    if (x == maze.width || y == maze.height)
        return 1;
    return 0;
}

int check_if_valid_coord(maze_t maze, int x, int y)
{
    int var = x * y;

    if (var < 0)
        return 0;
    if (maze.max < var || add_check(maze, x, y))
        return 0;
    if (maze.max < x + (y * maze.width) || x + (y * maze.width) < 0)
        return 0;
    return 1;
}
