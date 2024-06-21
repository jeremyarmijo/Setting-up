/*
** EPITECH PROJECT, 2023
** printf
** File description:
** branche if functions
*/
#include "my.h"

void dif_de_percent(va_list args, const char *format, int *z)
{
    if (format[*z] == '%'){
            *z = *z + percent_s(args, format, z);
            *z = *z + percent_di(args, format, z);
            *z = *z + percent_c(args, format, z);
            *z = *z + percent_percent(format, z);
            *z = *z + percent_exa(args, format, z);
            *z = *z + percent_examaj(args, format, z);
            *z = *z + percent_oct(args, format, z);
            *z = *z + percent_f(args, format, z);
            *z = *z + percent_e(args, format, z);
            *z = *z + percent_u(args, format, z);
    }
}
