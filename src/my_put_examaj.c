/*
** EPITECH PROJECT, 2023
** printf
** File description:
** exa ABDCEF
*/
#include "my.h"

int my_put_examaj(int n)
{
    if (n > 16) {
        my_put_examaj(n / 16);
    }
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    } else {
        n = n % 16;
        if (n > 9) {
            n = n + 7;
        }
        my_putchar(n + 48);
    }
    return 1;
}
