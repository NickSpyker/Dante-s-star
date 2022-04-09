/*
** EPITECH PROJECT, 2021
** dante
** File description:
** solve_maze.c
*/

#include "solver.h"

static void do_advance(maze_t *maze, int *x, int *y, enum TYPE *mv)
{
    maze->map[*x][*y] = 'o';
    for (int i = 0; i < 4; i++) {
        if (is_a_road(maze, *x + (!i ? 1 : i == 1 ? -1 : 0), \
        *y + (i == 2 ? 1 : i == 3 ? -1 : 0)) == 1) {
            *x += (!i ? 1 : i == 1 ? -1 : 0);
            *y += (i == 2 ? 1 : i == 3 ? -1 : 0);
            return;
        }
    }
    maze->map[*x][*y] = '.';
    *mv = STEP_BACK;
}

static void found_valid_road(maze_t *maze, int *x, int *y)
{
    while (is_a_road(maze, *x + 1, *y) != 1 && \
    is_a_road(maze, *x - 1, *y) != 1 && is_a_road(maze, *x, *y + 1) != 1 \
    && is_a_road(maze, *x, *y - 1) != 1 ) {
        maze->map[*x][*y] = '.';
        if (is_a_road(maze, *x + 1, *y) == 2) {
            *x += 1;
            continue;
        }
        if (is_a_road(maze, *x, *y + 1) == 2) {
            *y += 1;
            continue;
        }
        if (is_a_road(maze, *x, *y - 1) == 2) {
            *y -= 1;
            continue;
        }
        if (is_a_road(maze, *x - 1, *y) == 2) {
            *x -= 1;
            continue;
        }
    }
}

static void do_step_back(maze_t *maze, int *x, int *y, enum TYPE *mv)
{
    maze->map[*x][*y] = '.';
    for (int i = 0; i < 4; i++) {
        if (is_a_road(maze, *x + (!i ? 1 : i == 1 ? -1 : 0), \
        *y + (i == 2 ? 1 : i == 3 ? -1 : 0)) == 2 && !it_s_a_cross(maze, *x + \
        (!i ? 1 : i == 1 ? -1 : 0), *y + (i == 2 ? 1 : i == 3 ? -1 : 0))) {
            *x += (!i ? 1 : i == 1 ? -1 : 0);
            *y += (i == 2 ? 1 : i == 3 ? -1 : 0);
            return;
        }
    }
    found_valid_road(maze, x, y);
    *mv = ADVANCE;
}

static void format(maze_t *maze)
{
    maze->map[maze->nbr_rows - 1][maze->nbr_cols - 1] = \
    maze->map[maze->nbr_rows - 1][maze->nbr_cols - 1] == '*' ? 'o' : 'X';
    if (maze->map[maze->nbr_rows - 1][maze->nbr_cols - 2] == '*')
        maze->map[maze->nbr_rows - 1][maze->nbr_cols - 2] = 'o';
    else if (maze->map[maze->nbr_rows - 2][maze->nbr_cols - 1] == '*')
        maze->map[maze->nbr_rows - 2][maze->nbr_cols - 1] = 'o';
    for (int i = 0; i < maze->nbr_rows; i++)
        for (int j = 0; j < maze->nbr_cols; j++)
            maze->map[i][j] = maze->map[i][j] == '.' ? '*' : maze->map[i][j];
}

void solve_maze(maze_t *maze)
{
    enum TYPE mv = ADVANCE;
    int x = 0;
    int y = 0;

    while (x != maze->nbr_rows - 1 || y != maze->nbr_cols - 1) {
        if (mv == ADVANCE) {
            do_advance(maze, &x, &y, &mv);
            continue;
        }
        if (mv == STEP_BACK) {
            do_step_back(maze, &x, &y, &mv);
            continue;
        }
    }
    format(maze);
}
