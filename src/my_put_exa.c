/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** change int in exa
*/
#include "my.h"

int my_put_exa(int n)
{
    if (n > 16) {
        my_put_exa(n / 16);
    }
    if (n < 0) {
        my_putstr("error");
    } else {
        n = n % 16;
        if (n > 9){
            n = n + 39;
        }
        my_putchar(n + 48);
    }
    return 1;
}
