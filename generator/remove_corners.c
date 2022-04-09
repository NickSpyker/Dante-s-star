/*
** EPITECH PROJECT, 2021
** dante
** File description:
** remove_corners.c
*/

#include "generator.h"

void remove_corners(maze_t *maze)
{
    maze->map[0] = 0;
    maze->map[maze->width * maze->height - 1] = 0;
    if (maze->width > 2) {
        maze->map[maze->width] = 0;
        maze->map[maze->width * maze->height - 2] = 0;
    }
}
