/*
** EPITECH PROJECT, 2021
** dante
** File description:
** create_the_grid.c
*/

#include "generator.h"

void create_the_grid(maze_t *maze)
{
    int row = 0;
    int count = 0;

    for (int i = 0, lb = 0; i < maze->max; i++, lb++) {
        if (lb == maze->width) {
            row++;
            lb = 0;
        }
        if (row % 2 == 0)
            maze->map[i] = -1;
        else
            maze->map[i] = i % 2 ? -1 : count++;
    }
    maze->nbr_of_pitches = count;
}
