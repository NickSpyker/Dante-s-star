/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solver.h
*/

#ifndef SOLVER
    #define SOLVER

    #include <stdlib.h>
    #include <stdio.h>
    #include <stdbool.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <string.h>

char *open_and_read(char *path_to_file);
void error_handling(int argc);

    enum TYPE {
        ADVANCE,
        STEP_BACK
    };

    typedef struct vector_s {
        int x;
        int y;
    } vector_t;

    typedef struct maze_s {
        int nbr_rows;
        int nbr_cols;
        char *buffer;
        char **map;
    } maze_t;

char **malloc_and_fill_map(maze_t *maze, char *buffer);
void solve_maze(maze_t *maze);

int it_s_a_cross(maze_t *maze, int x, int y);
int is_a_road(maze_t *maze, int x, int y);

#endif/* SOLVER */
