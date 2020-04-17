/*
** EPITECH PROJECT, 2019
** find
** File description:
** find
*/

#include "my.h"

void find_p(char **tab, player_t *player)
{
    int x = 0, y = 0;

    while (tab[y] != NULL) {
        while (tab[y][x] != '\0'){
            if (tab[y][x] == 'P') {
                player->posY = y;
                player->posX = x;
                return;
            }
            x++;
        }
        x = 0;
        y++;
    }
}

void find_x(char **tab, x_t *box)
{
    int x = 0;
    int y = 0;

    while (tab[y] != NULL)
    {
        x = 0;
        while (tab[y][x] != '\0')
        {
            if (tab[y][x] == 'X') {
                box->posX = x;
                box->posY = y;
            }
            x++;
        }
        y++;
    }
}

void find_o(char **tab, o_t *o)
{
    int x = 0;
    int y = 0;
    int array = 0;

    while (tab[y] != NULL)
    {
        x = 0;
        while (tab[y][x] != '\0')
        {
            if (tab[y][x] == 'O') {
                o->posX[array] = x;
                o->posY[array] = y;
                array++;
            }
            x++;
        }
        y++;
    }
    do_my_array(o, array);
}

void do_my_array(o_t *o, int array)
{
    int rank = array;
    while (rank < 100)
    {
        if (o->posX[rank] == 0 && o->posY[rank] == 0) {
            o->posX[rank] = NULL;
            o->posY[rank] = NULL;
        }
        rank++;

    }
}

void find_my_stuff(char **tab, x_t *box, o_t *o)
{
    find_x(tab, box);
    print_o(tab, o);
}
