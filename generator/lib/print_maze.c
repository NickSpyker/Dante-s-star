/*
** EPITECH PROJECT, 2021
** dante
** File description:
** print_maze.c
*/

#include "generator.h"

void print_maze(maze_t maze)
{

    for (int i = 0, lb = 1; i < maze.max; i++, lb++) {
        write(1, maze.map[i] < 0 ? "X" : "*" , 1);
        if (lb == maze.width && i + 1 != maze.max) {
            write(1, "\n", 1);
            lb = 0;
        }
    }
}
