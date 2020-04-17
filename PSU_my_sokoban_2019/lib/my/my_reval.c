/*
** EPITECH PROJECT, 2019
** reval
** File description:
** reval
*/

#include "my.h"

char reval(int num)
{
    char nbr;
    if (num >= 0 && num <= 9) {
        nbr = num + '0';
        return (nbr);
    }
    else {
        nbr = num - 10 + 'A';
        return (nbr);
    }
}

char reval_min(int num)
{
    char nbr;
    if (num >= 0 && num <= 9) {
        nbr = num + '0';
        return (nbr);
    }
    else {
        nbr = num - 10 + 'a';
        return (nbr);
    }
}
