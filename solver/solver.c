/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver.c
*/

#include "solver.h"

static void print_2d_array(char **str)
{
    for (int i = 0; str[i]; i++) {
        write(1, str[i], strlen(str[i]));
        if (str[i + 1] != NULL)
            write(1, "\n", 1);
    }
}

int main(int argc, char *argv[])
{
    maze_t maze;

    error_handling(argc);
    maze.buffer = open_and_read(argv[1]);
    maze.map = malloc_and_fill_map(&maze, maze.buffer);
    free(maze.buffer);
    solve_maze(&maze);
    print_2d_array(maze.map);
    return 0;
}
