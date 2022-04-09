/*
** EPITECH PROJECT, 2021
** dante
** File description:
** get_coord.c
*/

#include "generator.h"

vector_t get_coord(maze_t maze, int value)
{
    int x = 0;
    int y = 0;

    for (int i = 0, lb = 0; i < maze.max; i++, lb++) {
        if (lb == maze.width) {
            y++;
            lb = 0;
            x = 0;
        }
        if (maze.map[i] == value)
            break;
        x++;
    }
    return (vector_t){x, y};
}
