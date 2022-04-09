/*
** EPITECH PROJECT, 2021
** dante
** File description:
** get_random_nbr.c
*/

#include "generator.h"

int get_random_nbr(int max)
{
    return rand() % max;
}
