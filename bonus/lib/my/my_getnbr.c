/*
** EPITECH PROJECT, 2021
** sfsm
** File description:
** my_getnbr.c
*/

int my_getnbr(char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == '-' || *str == '+')
        if (*str++ == '-')
            sign *= -1;
    for (int i = 0; str[i]; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            result *= 10;
            result += str[i] - '0';
        } else
            return result * sign;
    }
    return result * sign;
}
