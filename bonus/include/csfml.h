/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** csfml.h
*/

#ifndef CSFML
    #define CSFML

    #include "lib.h"

    enum MODE {
        start_mode,
        update_mode
    };

    typedef struct game_obj_s {
        sfSprite *sprite;
        sfVector2f *pos;
        bool is_obj;
    } game_obj_t;

    typedef struct game_s {
        sfRenderWindow *window;
        game_obj_t *obj;
        sfClock *clock;
        enum MODE mode;
        sfEvent event;
        char **maze;
        int nbr_of_rows;
        int nbr_of_cols;
    } game_t;

void cs_event_window_close(sfEvent event, sfRenderWindow *window);
game_t *cs_game_create(int width, int height, int fps, char *name);
void cs_game_destroy(game_t *game);
sfSprite *cs_sprite_create(char *path_to_file);
void cs_sprite_draw(sfRenderWindow *window, sfSprite *sprite, sfVector2f pos);
sfRenderWindow *cs_window_create(char *name, int widht, int height, int fps);

#endif/* CSFML */
