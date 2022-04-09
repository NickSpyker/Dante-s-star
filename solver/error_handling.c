/*
** EPITECH PROJECT, 2021
** dante
** File description:
** error_handling.c
*/

#include "solver.h"

void error_handling(int argc)
{
    if (argc < 2)
        fprintf(stderr, "ERROR:\tThere are not enough arguments.\n");
    if (argc > 2)
        fprintf(stderr, "ERROR:\tThere are too many arguments.\n");
}
