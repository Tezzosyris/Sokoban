/*
** EPITECH PROJECT, 2019
** my_sokoban
** File description:
** my_sokoban
*/

#include "my.h"

int sokoban(char **tab)
{
    player_t *player = malloc(sizeof(player_t));
    x_t *box = malloc(sizeof(x_t));
    global_t *global = malloc(sizeof(global_t));
    o_t *o = malloc(sizeof(o_t));

    set_my_game(global);
    number_of_o(tab, o);
    find_o(tab, o);
    find_p(tab, player);

    while (1){
        getmaxyx(stdscr, global->row, global->col);
        clear();
        print_map(global, tab);
        find_x(tab, box);
        if (check_if_lose(tab, box) == 1){
            endwin();
            return (1);
        }
        move_my_player(global, tab, player, box, o);
        refresh();
        if (check_if_win(tab, o) == 1){
            endwin();
            return (0);
        }
        print_o(tab, o);
    }

    endwin();
    return (0);
}

int main(int argc, char **argv)
{
    if (error_checker(argc) == 84)
        return (84);
    if (helper(argv) == 3)
        return (0);
    char *filepath = argv[1], *map = read_file(filepath);
    char **tab = my_str_to_wordtab(map);

    if (check_map(tab) == 84)
        return (84);
    if (sokoban(tab) == 1)
        return (1);

    return (0);
}