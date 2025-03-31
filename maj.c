/*
** EPITECH PROJECT, 2024
** Petit-Pain
** File description:
** maj.c
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
