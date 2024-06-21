/*
** EPITECH PROJECT, 2023
** printf
** File description:
** percent s
*/
#include "my.h"

int percent_s(va_list agrs, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 's'){
        my_putstr(va_arg(agrs, char *));
        cpt += 2;
    }
    return cpt;
}
