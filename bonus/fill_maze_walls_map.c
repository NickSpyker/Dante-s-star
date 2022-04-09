/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** fill_maze_walls_map.c
*/

#include "my.h"

static int get_nbr_of_rows(char *buffer)
{
    int result = 0;

    for (int i = 0; buffer[i]; i++)
        if (buffer[i] == '\n')
            result++;
    return result + 1;
}

static int get_nbr_of_cols(char *buffer)
{
    int result = 0;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] != '\n') {
            result++;
            continue;
        }
        break;
    }
    return result;
}

static void create_map(game_t *game, char *buffer)
{
    int row = 0;
    int col = 0;

    for (int i = 0; buffer[i]; i++) {
        if (buffer[i] == '\n') {
            row++;
            col = 0;
            continue;
        }
        game->maze[row][col++] = buffer[i];
    }
}

void fill_maze_walls_map(game_t *game)
{
    char *buffer;

    system("make -C ../");
    system("./../generator/generator 128 72 perfect > data/maze_map.txt");
    buffer = open_and_read("data/maze_map.txt");
    game->nbr_of_rows = get_nbr_of_rows(buffer);
    game->nbr_of_cols = get_nbr_of_cols(buffer);
    game->maze = malloc(sizeof(char *) * (game->nbr_of_rows + 1));
    for (int i = 0; i < game->nbr_of_rows; i++) {
        game->maze[i] = malloc(sizeof(char) * (game->nbr_of_cols + 1));
        for (int j = 0; j < game->nbr_of_cols; j++)
            game->maze[i][j] = '.';
        game->maze[i][game->nbr_of_cols] = '\0';
    }
    game->maze[game->nbr_of_rows] = NULL;
    create_map(game, buffer);
    free(buffer);
}
