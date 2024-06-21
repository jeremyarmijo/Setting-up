/*
** EPITECH PROJECT, 2023
** printf
** File description:
** EXA
*/
#include "my.h"

int percent_examaj(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'X'){
        my_put_examaj((int)va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
