/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** task02
*/

#include "../my.h"

int my_putstr(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
