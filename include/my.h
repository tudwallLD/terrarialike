/*
** EPITECH PROJECT, 2022
** MY
** File description:
** emacs
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

   typedef struct intarray {
        unsigned int col;
        unsigned int ligne;
    }intarray_t;

    int my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    int my_fake_flags(const char format, va_list list);
    int my_fake_flags01(const char format, va_list list);
    int my_fake_flags02(const char format, va_list list);
    int my_fake_flags03(const char format, va_list list);
    long long int my_compute_power_it(int nb, int p);
    int my_putfloat(float f, int precision);
    int my_putnbr_base(int nbr, char const *base);
    int my_disp_flags(const char format, va_list list);
    int my_conv_flags(const char format, va_list list);
    int my_printf(const char *format, ...);
    char *my_sort_word_array (char *tab);
    char **my_str_to_word_array(char *str);
    int **my_strarray_to_int_array(intarray_t *intarray, char **str);
    int my_count_word(char *str);
    int my_strn(char const *str);
    char **my_countchar(char *str, char **tab);
    int my_execve(char **argv, char **env);
    int array_size(char **array);
    char **array_dup(char **src);
    char **my_strconcat(char *str);

#endif
