/*
** EPITECH PROJECT, 2021
** dante
** File description:
** tools.c
*/

#include "solver.h"

int is_a_road(maze_t *maze, int x, int y)
{
    if ((x < 0) || (maze->nbr_rows <= x) || (y < 0) || (maze->nbr_cols <= 0))
        return 0;
    if (maze->map[x][y] == '.')
        return 3;
    return maze->map[x][y] == '*' ? 1 : maze->map[x][y] == 'o' ? 2 : 0;
}

int it_s_a_cross(maze_t *maze, int x, int y)
{
    int count = 0;

    if (!is_a_road(maze, x, y))
        return false;
    count += 0 < is_a_road(maze, x + 1, y) ? 1 : 0;
    count += 0 < is_a_road(maze, x - 1, y) ? 1 : 0;
    count += 0 < is_a_road(maze, x, y + 1) ? 1 : 0;
    count += 0 < is_a_road(maze, x, y - 1) ? 1 : 0;
    return 2 < count ? true : false;
}
