/*
** EPITECH PROJECT, 2019
** error_helper
** File description:
** error_helper
*/

#include "my.h"

int length_check(int argc)
{
    if (argc != 2)
        return (84);
    return (0);
}

int error_checker(int argc)
{
    if (length_check(argc) == 84)
        return (84);
    return (0);
}

int helper(char **argv)
{
    if (argv[1][0] == '-' && argv[1][1] == 'h') {
        my_putstr("USAGE\n");
        my_putstr("\t./my_sokoban map\n");
        my_putstr("DESCRIPTION\n");
        my_putstr("\tmap file representing the warehouse ");
        my_putstr("map, containing '#' for walls,\n");
        my_putstr("\t    'P' for the player, 'X' ");
        my_putstr("for boxes and 'O' for storage locations.");
        my_putstr("\n");

        return (3);
    }
    return (0);
}