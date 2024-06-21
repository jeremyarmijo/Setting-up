/*
** EPITECH PROJECT, 2023
** miniprintf
** File description:
** bsdeprintf
*/
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int my_printf(const char *format, ...)
{
    int y;
    int *z = &y;
    va_list args;

    y = 0;
    va_start(args, format);
    while (format[*z] != '\0') {
        dif_de_percent(args, format, z);
        writeelse(format, z);
    }
    va_end(args);
    return *z - 1;
}
