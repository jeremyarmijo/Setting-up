/*
** EPITECH PROJECT, 2023
** printf
** File description:
** exa
*/
#include "my.h"

int percent_exa(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'x'){
        my_put_exa((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
