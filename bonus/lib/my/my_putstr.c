/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** my_putstr.c
*/

#include "my.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}
