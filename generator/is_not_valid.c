/*
** EPITECH PROJECT, 2021
** dante
** File description:
** is_not_valid.c
*/

#include "generator.h"

int is_not_valid(int value, maze_t *maze)
{
    int max = -1;
    int result = 1;
    int loop = 0;

    for (int i = 0; i < maze->max; i++) {
        if (maze->map[i] > max)
            max = maze->map[i];
        if (loop)
            continue;
        if (maze->map[i] == value && value > 0) {
            result = 0;
            loop = 1;
        }
    }
    if (max + 1 < maze->nbr_of_pitches)
        maze->nbr_of_pitches = max;
    return result;
}
