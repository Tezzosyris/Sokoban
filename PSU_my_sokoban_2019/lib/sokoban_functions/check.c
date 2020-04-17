/*
** EPITECH PROJECT, 2019
** check_my_game
** File description:
** check_my_game
*/

#include "my.h"

int check_map(char **tab)
{
    if (check_map_valid (tab) == 84)
        return (84);
    if (check_parameters (tab) == 84)
        return (84);
    return (0);
}

int check_map_valid(char **tab)
{
    int x = 0, y = 0;

    while (tab[y] != NULL)
    {
        x = 0;
        while (tab[y][x] != '\0')
        {
            if (tab[y][x] != 'O' && tab[y][x] != ' '
                && tab[y][x] != 'P' && tab[y][x] != 'X'
                && tab[y][x] != '#') {
                return (84);

            }
            x++;
        }
        y++;
    }
    return (0);
}

int check_parameters(char **tab)
{
    int x = 0, y = 0, box = 0, p = 0, o = 0;

    while (tab[y] != NULL)
    {
        x = 0;
        while (tab[y][x] != '\0')
        {
            if (tab[y][x] == 'O')
                o++;
            if (tab[y][x] == 'P')
                p++;
            if (tab[y][x] == 'X')
                box++;
            x++;
        }
        y++;
    }
    if (check_composents(box, p, o) == 84)
        return (84);
    return (0);
}

int check_composents(int box, int p, int o)
{
    if (box == 0 && p == 0 && o == 0)
        return (84);
    if (p>1)
        return (84);
    if (box != o)
        return (84);
    return (0);
}