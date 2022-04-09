/*
** EPITECH PROJECT, 2021
** dante
** File description:
** contaminates_at.c
*/

#include "generator.h"

int contaminates_at(maze_t *maze, int x, int y, int value)
{
    if (!check_if_valid_coord(*maze, x, y))
        return 1;
    if (get_coord_value(*maze, x, y) < 0 ||
    get_coord_value(*maze, x, y) == value)
        return 1;
    set_value_coord(maze, value, x, y);
    contaminates_at(maze, x + 1, y, value);
    contaminates_at(maze, x - 1, y, value);
    contaminates_at(maze, x, y + 1, value);
    contaminates_at(maze, x, y - 1, value);
    return 0;
}
