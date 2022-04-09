/*
** EPITECH PROJECT, 2021
** dante
** File description:
** check_the_adjacent.c
*/

#include "generator.h"

int check_the_adjacent(maze_t *maze, int *adj);

int fn(maze_t *maze, int *adj)
{
    if (*adj != UP) {
        *adj += *adj == 3 ? -3 : 1;
        return check_the_adjacent(maze, adj);
    }
    return 1;
}

int check_the_adjacent(maze_t *maze, int *adj)
{
    vector_t coord_to_check;

    coord_to_check.x = *adj == LEFT ? maze->coord.x - 2 : *adj == RIGHT ? \
    maze->coord.x + 2 : maze->coord.x;
    coord_to_check.y = *adj == UP ? maze->coord.y - 2 : *adj == DOWN ? \
    maze->coord.y + 2 : maze->coord.y;
    if (!check_if_valid_coord(*maze, coord_to_check.x, coord_to_check.y))
        return fn(maze, adj);
    if (get_coord_value(*maze, maze->coord.x, maze->coord.y) == \
    get_coord_value(*maze, coord_to_check.x, coord_to_check.y))
        return fn(maze, adj);
    return 0;
}
