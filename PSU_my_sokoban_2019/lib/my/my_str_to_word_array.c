/*
** EPITECH PROJECT, 2019
** word_to_array
** File description:
** word_to_array
*/

#include "my.h"

int is_alnum(char c)
{
    if (c <= '\n' || c >= 127)
        return (0);
    return (1);
}

int word_count(char *str)
{
    int i = 0;
    int word = 0;

    while (str != NULL && str[i]) {
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0)
            word++;
        i++;
    }
    return (word);
}

char **my_str_to_wordtab(char *str)
{
    int j = 0;
    int i = 0;
    char **wordtab = malloc((word_count(str) + 1) * sizeof(char *));
    int len = 0;

    while (str != NULL && str[i]) {
        if (is_alnum(str[i]))
            len = len + 1;
        if (is_alnum(str[i]) == 1 && is_alnum(str[i + 1]) == 0) {
            wordtab[j] = malloc(len + 1);
            my_strncpy(wordtab[j], &str[i - len + 1], len);
            len = 0;
            j = j + 1;
        }
        i = i + 1;
    }
    wordtab[j] = NULL;
    return (wordtab);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n){
        dest[i] = src[i];
        i++;
    }
    if (i == n)
        dest[i] = '\0';
    return (dest);
}

int my_show_word_array(char **tab)
{
    int count_row = 0;

    while (tab[count_row] != NULL) {
        my_putstr(tab[count_row]);
        my_putchar('\n');
        count_row++;
    }
    return (0);
}
