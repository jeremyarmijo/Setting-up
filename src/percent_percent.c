/*
** EPITECH PROJECT, 2023
** printf
** File description:
** %%
*/
#include "my.h"

int percent_percent(const char *format, int *z)
{
    int cpt = 0;

    if (format[*z] == '%' && format[*z + 1] == '%'){
        my_putchar('%');
        cpt += 2;
    }
    return cpt;
}
