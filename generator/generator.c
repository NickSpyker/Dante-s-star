/*
** EPITECH PROJECT, 2021
** dante
** File description:
** generator.c
*/

#include "generator.h"

static void rm_walls(maze_t *maze, int mv_x, int mv_y, int value)
{
    set_value_coord(maze, value, \
    maze->coord.x + mv_x, maze->coord.y + mv_y);
}

static void contaminates(maze_t *maze, int adj, int value)
{
    switch (adj) {
        case UP:
            rm_walls(maze, 0, -1, value);
            contaminates_at(maze, maze->coord.x, maze->coord.y - 2, value);
            break;
        case DOWN:
            rm_walls(maze, 0, 1, value);
            contaminates_at(maze, maze->coord.x, maze->coord.y + 2, value);
            break;
        case RIGHT:
            rm_walls(maze, 1, 0, value);
            contaminates_at(maze, maze->coord.x + 2, maze->coord.y, value);
            break;
        case LEFT:
            rm_walls(maze, -1, 0, value);
            contaminates_at(maze, maze->coord.x - 2, maze->coord.y, value);
            break;
    }
}

static void main_loop(maze_t *maze)
{
    int value = get_random_nbr(maze->nbr_of_pitches) + 1;
    int check_adj = get_random_nbr(4);

    if (is_not_valid(value, maze))
        return;
    maze->coord = get_coord(*maze, value);
    if (check_the_adjacent(maze, &check_adj))
        return;
    contaminates(maze, check_adj, value);
}

static int check_if_need_perfect(int argc)
{
    if (argc == 4)
        return 1;
    return 0;
}

int main(int argc, char *argv[])
{
    maze_t maze;

    srand(time(NULL));
    error_handling(argc, argv);
    maze.width = atoi(argv[1]);
    maze.height = atoi(argv[2]);
    maze.max = maze.width * maze.height;
    maze.map = malloc(sizeof(int) * maze.max);
    maze.perfect = check_if_need_perfect(argc);
    create_the_grid(&maze);
    while (the_maze_is_not_perfect(maze))
        main_loop(&maze);
    remove_corners(&maze);
    if (!maze.perfect)
        destroy_walls(&maze);
    print_maze(maze);
    free(maze.map);
    return 0;
}
