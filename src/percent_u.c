/*
** EPITECH PROJECT, 2023
** printf
** File description:
** add %u to printf
*/
#include "my.h"

int percent_u(va_list args, const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == 'u'){
        my_put_u(va_arg(args, int));
        cpt += 2;
    }
    return cpt;
}
