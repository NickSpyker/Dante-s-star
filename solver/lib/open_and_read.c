/*
** EPITECH PROJECT, 2021
** dante
** File description:
** open_and_read.c
*/

#include "solver.h"

static void open_and_read_error_handling(int fd, char *path_to_file)
{
    if (fd <= 0) {
        fprintf(stderr, "ERROR:\t'%s', wrong path to file.\n", path_to_file);
        exit(84);
    }
}

char *open_and_read(char *path_to_file)
{
    int fd = open(path_to_file, O_RDONLY);
    struct stat st;
    char *buffer;

    open_and_read_error_handling(fd, path_to_file);
    stat(path_to_file, &st);
    buffer = malloc(sizeof(char) * (st.st_size + 1));
    for (int i = 0; i <= st.st_size; i++)
        buffer[i] = '\0';
    read(fd, buffer, st.st_size);
    close(fd);
    return buffer;
}
