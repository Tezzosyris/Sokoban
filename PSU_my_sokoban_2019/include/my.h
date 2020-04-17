/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <ncurses.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>

#ifndef STRUCT_PLAYER__
#define STRUCT_PLAYER__

typedef struct player_s
{
    int posX;
    int posY;
}player_t;

#endif /*SPRITE_H__*/

#ifndef STRUCT_X__
#define STRUCT_X__

typedef struct x_s
{
    int number;
    int posX;
    int	posY;
}x_t;

#endif /*SPRITE_X__*/

#ifndef STRUCT_O__
#define STRUCT_O__

typedef struct o_s
{
    int posX[100];
    int posY[100];
    int nbr_of_o;
    struct o_s *next;

}o_t;

#endif /*SPRITE_O__*/

#ifndef STRUCT_S__
#define STRUCT_S__

typedef struct global_s
{
    x_t *box;
    o_t **o;
    player_t *player;
    int key;
    int row;
    int col;
    WINDOW *window;
    char **tab;

}global_t;

#endif /*LINKEDLIST_S__*/

//sokoban_functions######################################################
int helper(char **argv);
int length_check(int argc);
int error_check(int argc);
int error_checker(int argc);
void set_window(global_t *global);
void set_my_game(global_t *global);
int sokoban(char **tab);
void print_map(global_t *global, char **tab);
void number_of_o(char **tab, o_t *o);
void print_o(char **tab, o_t *o);
void make_my_sokoban(char **tab);

//find###################################################################
void find_p(char **tab, player_t *player);
void find_x(char **tab, x_t *x);
void find_o(char **tab, o_t *o);
void find_my_stuff(char **tab, x_t *box, o_t *o);
int find_biggest_strlen(char **tab);
int find_my_map_lenght(char **tab);
void do_my_array(o_t *o, int array);

//move###################################################################
void move_my_player(global_t *global, char **tab,
                player_t *player, x_t *box, o_t *o);
void up(char **ar_map, player_t *player, x_t *box);
void down(char **ar_map, player_t *player, x_t *box);
void left(char **ar_map, player_t *player, x_t *box);
void right(char **ar_map, player_t *player, x_t *box);


//check##################################################################
int check_map_valid (char **tab);
int check_parameters (char **tab);
int check_composents(int box, int P, int O);
int check_map(char **tab);
int check_if_win(char **tab, o_t *o);
int check_if_lose(char **tab, x_t *box);
//my_printf##############################################################
int my_printf(const char *format, ...);
char reval_min(int num);
void p_function(long long nb);
void blank_function(void);
void print_pourcent_function(void);
void b_function(unsigned int nbr);
void c_function(char c);
void d_function(int nbr);
void i_function(int nbr);
void o_function(unsigned int nbr);
void s_function(char *str);
void u_function(unsigned int c);
void xc_function(unsigned int nbr);
void x_function(unsigned int nbr);

//system_function##############################################################
int my_putstr(char *str);
int my_strlen(char *str);
void my_putchar(char c);
void my_putnbr(int nb);
int my_atoi(char *str);
char reval(int num);
void strev(char *str);
char *read_file(char *filepath);
int word_count(char *str);
char **my_str_to_wordtab(char *str);
int is_alnum(char c);
char *my_strncpy(char *dest, char const *src, int n);
int my_show_word_array(char **tab);