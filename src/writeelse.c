/*
** EPITECH PROJECT, 2023
** prntff
** File description:
** write
*/
#include <unistd.h>
#include "my.h"

int writeelse(const char *format, int *z)
{
    if (format[*z] != '%' && format[*z] != '\0') {
        write(1, &format[*z], 1);
        *z = *z + 1;
    }
    return 0;
}
