/*
** EPITECH PROJECT, 2021
** dante
** File description:
** generator.h
*/

#ifndef GENERATOR
    #define GENERATOR

    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <stdio.h>
    #include <time.h>

    enum TYPE {
        UP,
        DOWN,
        RIGHT,
        LEFT
    };

    void error_handling(int argc, char *argv[]);
    int get_random_nbr(int max);

    typedef struct vector_s {
        int x;
        int y;
    } vector_t;

    typedef struct maze_s {
        int nbr_of_pitches;
        vector_t coord;
        int perfect;
        int height;
        int width;
        int *map;
        int max;
    } maze_t;

    void set_value_coord(maze_t *maze, int value, int x, int y);
    int contaminates_at(maze_t *maze, int x, int y, int value);
    int check_if_valid_coord(maze_t maze, int x, int y);
    int get_coord_value(maze_t maze, int x, int y);
    int check_the_adjacent(maze_t *maze, int *adj);
    vector_t get_coord(maze_t maze, int value);
    int is_not_valid(int value, maze_t *maze);
    int the_maze_is_not_perfect(maze_t maze);
    void create_the_grid(maze_t *maze);
    void remove_corners(maze_t *maze);
    void destroy_walls(maze_t *maze);
    void print_maze(maze_t maze);

#endif/* GENERATOR */
