/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}
