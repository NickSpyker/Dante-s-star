/*
** EPITECH PROJECT, 2021
** dante
** File description:
** set_value_coord.c
*/

#include "generator.h"

void set_value_coord(maze_t *maze, int value, int x, int y)
{
    maze->map[x + (y * maze->width)] = value;
}
