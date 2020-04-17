/*
** EPITECH PROJECT, 2019
** move
** File description:
** move
*/

#include "my.h"

void move_my_player(global_t *global, char **tab,
                player_t *player, x_t *box, o_t *o)
{
    global->key = getch();
    if (global->key == 27) {
        endwin();
        exit(1);
    }
    if (global->key == KEY_UP && tab[player->posY - 1][player->posX] != '#')
        up(tab, player, box);
    if (global->key == KEY_DOWN && tab[player->posY + 1][player->posX]
        != '#')
        down(tab, player, box);
    if (global->key == KEY_LEFT && tab[player->posY][player->posX - 1]
        != '#')
        left(tab, player, box);
    if (global->key == KEY_RIGHT && tab[player->posY][player->posX + 1]
        != '#')
        right(tab, player, box);
}

void up(char **tab, player_t *player, x_t *box)
{
    if (tab[player->posY - 1][player->posX] == 'X' &&
        tab[player->posY - 2][player->posX] != '#' &&
        tab[player->posY - 2][player->posX] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY - 2][player->posX] = 'X';
        tab[player->posY - 1][player->posX] = 'P';
        player->posY--;
    }
    else if (tab[player->posY - 1][player->posX] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY - 1][player->posX] = 'P';
        player->posY--;
    }
}

void down(char **tab, player_t *player, x_t *box)
{
    if (tab[player->posY + 1][player->posX] == 'X' &&
        tab[player->posY + 2][player->posX] != '#' &&
        tab[player->posY + 2][player->posX] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY + 2][player->posX] = 'X';
        tab[player->posY + 1][player->posX] = 'P';
        player->posY++;
    }
    else if (tab[player->posY + 1][player->posX] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY + 1][player->posX] = 'P';
        player->posY++;
    }
}

void left(char **tab, player_t *player, x_t *box)
{
    if (tab[player->posY][player->posX - 1] == 'X' &&
        tab[player->posY][player->posX - 2] != '#' &&
        tab[player->posY][player->posX - 2] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY][player->posX - 1] = 'P';
        tab[player->posY][player->posX - 2] = 'X';
        player->posX--;
    }
    else if (tab[player->posY][player->posX - 1] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY][player->posX - 1] = 'P';
        player->posX--;
    }
}

void right(char **tab, player_t *player, x_t *box)
{
    if (tab[player->posY][player->posX + 1] == 'X' &&
        tab[player->posY][player->posX + 2] != '#' &&
        tab[player->posY][player->posX + 2] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY][player->posX + 1] = 'P';
        tab[player->posY][player->posX + 2] = 'X';
        player->posX++;
    }
    else if (tab[player->posY][player->posX + 1] != 'X'){
        tab[player->posY][player->posX] = ' ';
        tab[player->posY][player->posX + 1] = 'P';
        player->posX++;
    }
}