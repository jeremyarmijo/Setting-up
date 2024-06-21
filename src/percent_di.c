/*
** EPITECH PROJECT, 2023
** printf
** File description:
** percent d,i
*/
#include "my.h"

int percent_di(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'd'){
        my_put_nbr((int)va_arg(args, int));
        cpt += 2;
    }
    if (format[*z] == '%' && format[*z + 1] == 'i'){
        my_put_nbr((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
