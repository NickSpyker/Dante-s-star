/*
** EPITECH PROJECT, 2021
** dante
** File description:
** malloc_and_fill_map.c
*/

#include "solver.h"

static char **fill_map(char **result, char *buffer)
{
    int x = 0;
    int y = 0;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '\n') {
            x++;
            y = 0;
            continue;
        }
        result[x][y] = buffer[i];
        y++;
    }
    return result;
}

char **malloc_and_fill_map(maze_t *maze, char *buffer)
{
    char **result;
    bool count_cols = true;

    maze->nbr_rows = 1;
    maze->nbr_cols = 0;
    for (int i = 0; i < (int)strlen(buffer); i++) {
        maze->nbr_rows += buffer[i] == '\n' ? 1 : 0;
        count_cols = buffer[i] == '\n' ? false : count_cols;
        maze->nbr_cols += count_cols ? 1 : 0;
    }
    result = malloc(sizeof(char *) * (maze->nbr_rows + 1));
    result[maze->nbr_rows] = NULL;
    for (int i = 0; i < maze->nbr_rows; i++) {
        result[i] = malloc(sizeof(char) * (maze->nbr_cols + 1));
        result[i][maze->nbr_cols] = '\0';
    }
    return fill_map(result, buffer);
}
