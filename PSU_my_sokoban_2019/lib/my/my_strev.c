/*
** EPITECH PROJECT, 2019
** strev
** File description:
** strev
*/

#include "my.h"

void strev(char *str)
{
    int len = my_strlen(str);
    int i = 0;

    while (i < len / 2)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
        i++;
    }
}
