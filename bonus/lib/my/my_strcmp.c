/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** my_strcmp.c
*/

int my_strcmp(char const *str_a, char const *str_b)
{
    while (*str_a == *str_b && *str_a != '\0') {
        str_a++;
        str_b++;
    }
    return *str_a - *str_b;
}
