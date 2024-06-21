/*
** EPITECH PROJECT, 2023
** printf
** File description:
** %f
*/
#include "my.h"

int percent_f(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'f'){
        my_put_float(va_arg(args, double));
        cpt += 2;
    }
    if (format[*z] == '%' && format[*z + 1] == 'F'){
        my_put_float(va_arg(args, double));
        cpt += 2;
    }
    return cpt;
}
