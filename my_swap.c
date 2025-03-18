/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** task01
*/

void my_swap(char *a, char *b)
{
    char c = *b;

    *b = *a;
    *a = c;
}
