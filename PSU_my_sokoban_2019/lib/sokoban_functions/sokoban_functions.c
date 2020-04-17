/*
** EPITECH PROJECT, 2019
** read_file
** File description:
** read_file
*/

#include "my.h"

char *read_file(char *filepath)
{
    struct stat *statbuf = malloc(sizeof(struct stat) + 1);
    int fd = 0;
    long int size_file = 0;
    char *buf;

    if (statbuf == NULL)
        return '\0';
    if (stat(filepath, statbuf) == -1)
        return '\0';
    size_file = statbuf->st_size;
    buf = malloc(sizeof(char) * (size_file + 1));
    if (buf == NULL)
        return '\0';
    fd = open(filepath, O_RDONLY);
    if (fd < 0)
        return '\0';
    if (read(fd, buf, size_file) == -1)
        return '\0';
    buf[size_file] = '\0';
    return buf;
}

void print_map(global_t *global, char **tab)
{
    int i = 0;
    while (tab[i] != NULL) {
        mvwprintw(global->window,
        (global->row / 2 + i) - (find_my_map_lenght(tab) / 2) ,
        (global->col / 2) - (find_biggest_strlen(tab) / 2), "%s", tab[i]);
        i++;
    }
}

int find_biggest_strlen(char **tab)
{
    int x = 0, y = 0;

    while (tab[y] != NULL)
    {
        if (my_strlen(tab[y]) > x)
            x = my_strlen(tab[y]);
        y++;
    }
    return (x);
}

int find_my_map_lenght(char **tab)
{
    int y = 0;

    while (tab[y] != NULL)
    {
        y++;
    }
    return (y);
}