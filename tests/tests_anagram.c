/*
** EPITECH PROJECT, 2024
** Petit-Pain
** File description:
** tests_anagram.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

Test(maj_function, lowercase_conversion)
{
    char test_str[] = "HELLO";
    char *result = maj(test_str);

    cr_assert_str_eq(result, "hello", "maj function should convert uppercase to lowercase");
}