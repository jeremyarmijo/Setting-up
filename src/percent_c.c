/*
** EPITECH PROJECT, 2023
** printf
** File description:
** percent c
*/
#include "my.h"

int percent_c(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z + 1] == 'c') {
        my_putchar((char)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
