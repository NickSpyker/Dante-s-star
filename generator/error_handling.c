/*
** EPITECH PROJECT, 2021
** dante
** File description:
** error_handling.c
*/

#include "generator.h"

static void check_nbr_of_arguments(int argc)
{
    if (argc < 3) {
        fprintf(stderr, "ERROR:\tThere are not enough arguments.\n");
        exit(84);
    }
    if (argc > 4) {
        fprintf(stderr, "ERROR:\tThere are too many arguments.\n");
        exit(84);
    }
}

static void check_type_of_argument(char *argv)
{
    for (int i = 0; argv[i]; i++) {
        if (argv[i] < '0' || '9' < argv[i]) {
            fprintf(stderr, "ERROR:\t%s is not a number.\n", argv);
            exit(84);
        }
    }
}

void error_handling(int argc, char *argv[])
{
    check_nbr_of_arguments(argc);
    check_type_of_argument(argv[1]);
    check_type_of_argument(argv[2]);
}
