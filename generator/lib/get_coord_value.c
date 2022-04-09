/*
** EPITECH PROJECT, 2021
** dante
** File description:
** get_coord_value.c
*/

#include "generator.h"

int get_coord_value(maze_t maze, int x, int y)
{
    return maze.map[x + (y * maze.width)];
}
