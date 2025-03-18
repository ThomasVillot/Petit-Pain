/*
** EPITECH PROJECT, 2025
** anagram
** File description:
** anagram
*/

#include "my.h"

char *maj(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return str;
}

static void str_maj(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        str = maj(str);
    }
}

void reverses(char *a, char *b)
{
    if (*b < *a) {
        my_swap(a, b);
    }
}

void sorta(char *str, int size)
{
    for (int j = 0; j < size - 1; j++) {
        for (int i = 0; i < size - 1; i++)
            reverses(&str[j], &str[j + 1]);
    }
}

void sort_word(char *str, int size)
{
    str_maj(str);
    while (size != 0) {
        sorta(str, size);
        size--;
    }
}

int main(int ac, char **av)
{
    char *str = av[1];
    char *str1 = av[2];

    if (ac <= 2) {
        my_putstr("Error: not enough arguments.\n");
        return 84;
    }
    sort_word(str, my_strlen(str));
    sort_word(str1, my_strlen(str1));
    if (my_strcmp(str, str1) == 0)
        my_putstr("anagram!\n");
    else
        my_putstr("no anagrams.\n");
    return 0;
}
