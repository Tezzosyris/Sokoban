/*
** EPITECH PROJECT, 2019
** set_my_game
** File description:
** set_my_game
*/

#include "my.h"

void set_window(global_t *global)
{
    noecho();
    cbreak();
    global->window = initscr();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    getmaxyx(stdscr, global->row, global->col);
}

void set_my_game(global_t *global)
{
    set_window(global);
}

void number_of_o(char **tab, o_t *o)
{
    int x = 0;
    int y = 0;
    int z = 0;

    while (tab[y] != NULL)
    {
        x = 0;
        while (tab[y][x] != '\0')
        {
            if (tab[y][x] == 'O') {
                z++;
            }
            x++;
        }
        y++;
    }
    o->nbr_of_o = z;
}

void print_o(char **tab, o_t *o)
{
    int array = 0;
    while (o->posX[array] != NULL) {
        if (tab[o->posY[array]][o->posX[array]] != 'X'
            && tab[o->posY[array]][o->posX[array]] != 'P')
            tab[o->posY[array]][o->posX[array]] = 'O';
        array++;
    }
}