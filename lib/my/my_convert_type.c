/*
** FRIEND PROJECT, 2024
** my_convert_type
** File description:
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

void my_set_pointer(void **pointer, int x)
{
    return;
}

void **my_convert_type(void *pointer , char *str)
{
    char **types = {"int", "bool", "char", "float", "int *", "bool *", "char *", "float *"};
    int x = 0;
    int type_size = 0;

    for (; my_strcmp(str, types[x]) != 0;x++);
    printf("char = 3 = (%d)?\n", x);
    if (x >= 3)
        my_set_pointer(&pointer, x);
    pointer = malloc(sizeof(type_size));
    return (pointer);
}

int main(void)
{
    int nb = 10;
    int *nb_bis;

    // test 1
    nb_bis = *my_convert_type(&nb, "char");
    printf("nb_bis[1] = %d\n", *nb_bis);
    return 0;
}
