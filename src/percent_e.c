/*
** EPITECH PROJECT, 2023
** printf
** File description:
** %e%E
*/
#include "my.h"

int percent_e(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'e') {
        my_put_scientific_notation(va_arg(args, double));
        cpt += 2;
    }
    return (cpt);
}
