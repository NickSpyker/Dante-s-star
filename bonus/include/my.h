/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** my.h
*/

#ifndef MY_LIB
    #define MY_LIB

    #include "csfml.h"

    int my_getnbr(char *str);
    void my_put_nbr(int nb);
    void my_putchar(char c);
    void my_putstr(char const *str);
    int my_strcmp(char const *str_a, char const *str_b);
    int my_strlen(char const *str);
    char *open_and_read(char *path_to_file);

    void start(game_t *game);
    void update(game_t *game);
    void fill_assets(game_obj_t *obj);
    void fill_maze_walls_map(game_t *game);

#endif/* MY_LIB */
