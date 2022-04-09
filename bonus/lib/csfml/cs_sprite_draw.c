/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** cs_sprite_draw.c
*/

#include "my.h"

void cs_sprite_draw(sfRenderWindow *window, sfSprite *sprite, sfVector2f pos)
{
    if (pos.x < 0 && pos.y < 0)
        return;
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}
