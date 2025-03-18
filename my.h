/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #include <stdbool.h>

int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_find_prime_sup(int nb);
int check_char(char c);
bool find_sign(char const *str);
int check_limit(int i, char stri, bool is_neg);
int get_nbr(char const *str, bool is_neg);
int my_getnbr(char const *str);
int my_is_prime(int nb);
int my_isneg(int n);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
char *my_revstr(char *str);
int my_showmem(char const *str, int size);
int my_showstr(char const *str);
void reverse(char *a, char *b);
void my_sort_int_array(char *array, int size);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
int tablen(char const *str);
char **loop(char **array, int current, char const *str, int lenght_string);
char **my_str_to_word_array(char const *str);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
int check(char *str, char *to_find);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
void my_swap(char *a, char *b);
char *my_strdup(char const *src);

struct info_param {
    int lenght;
    char *str;
    char *copy;
    char **word_array;
};

#endif /* MY_H */
