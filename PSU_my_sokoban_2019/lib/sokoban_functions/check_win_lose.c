/*
** EPITECH PROJECT, 2019
** win/lose
** File description:
** win/lose
*/

#include "my.h"

int check_if_win(char **tab, o_t *o)
{
    int array = 0;
    int win = 0;

    while (o->posX[array] != NULL){
        if (tab[o->posY[array]][o->posX[array]] == 'X')
            win++;
        array++;
    }
    if (win == o->nbr_of_o)
        return (1);

    return (0);
}

int check_if_lose(char **tab, x_t *box)
{
    if (tab[box->posY+1][box->posX] == '#'
        && tab[box->posY][box->posX+1] == '#')
        return (1);
    if (tab[box->posY-1][box->posX] == '#'
        && tab[box->posY][box->posX-1] == '#')
        return (1);
    if (tab[box->posY-1][box->posX] == '#'
        && tab[box->posY][box->posX+1] == '#')
        return (1);
    if (tab[box->posY+1][box->posX] == '#'
        && tab[box->posY][box->posX-1] == '#')
        return (1);

    return (0);
}