/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
