/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
** my_atoi
*/

#include "my.h"

int	my_atoi(char *str)
{
    int	sign = 0, i = 0, res = 0;

    ((str[i] == '-') ? (sign = 1, i++) : (0));
    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9'){
            res *= 10;
            res += str[i] - '0';
        }
        else
            return (res);
        i++;
    }
    if (sign == 0)
        return (res);
    else
        return (-res);
}