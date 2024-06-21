/*
** EPITECH PROJECT, 2023
** printf
** File description:
** percent oct
*/
#include "my.h"

int percent_oct(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'o'){
        my_put_oct((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
