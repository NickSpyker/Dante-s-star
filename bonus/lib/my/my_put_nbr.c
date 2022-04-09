/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** my_put_nbr.c
*/

#include "my.h"

void my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr(nb * -1);
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    if (nb < 10 && nb / 10 == 0)
        my_putchar(nb + '0');
}
