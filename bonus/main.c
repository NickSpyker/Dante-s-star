/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** main.c
*/

#include "my.h"

static void draw_all(sfRenderWindow *window, game_obj_t obj)
{
    for (int i = 0; i < 9217; i++)
        cs_sprite_draw(window, obj.sprite, obj.pos[i]);
}

int main(void)
{
    game_t *game = cs_game_create(1280, 720, 60, "- maze -");

    fill_assets(game->obj);
    fill_maze_walls_map(game);
    while (sfRenderWindow_isOpen(game->window)) {
        sfRenderWindow_clear(game->window, sfBlack);
        if (game->mode == start_mode)
            start(game);
        else if (game->mode == update_mode)
            update(game);
        else
            sfRenderWindow_close(game->window);
        for (int i = 0; game->obj[i].is_obj; i++)
            draw_all(game->window, game->obj[i]);
        sfRenderWindow_display(game->window);
    }
    cs_game_destroy(game);
    free(game);
    return 0;
}
