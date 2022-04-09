/*
** EPITECH PROJECT, 2021
** bonus
** File description:
** cs_sprite_create.c
*/

#include "my.h"

sfSprite *cs_sprite_create(char *path_to_file)
{
    sfTexture *texture;
    sfSprite *sprite;

    texture = sfTexture_createFromFile(path_to_file, NULL);
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfTexture_setRepeated(texture, sfTrue);
    return sprite;
}
