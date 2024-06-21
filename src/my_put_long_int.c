/*
** EPITECH PROJECT, 2023
** printf
** File description:
** put-nbr for long
*/
#include "my.h"

int my_put_long_int(unsigned int n)
{
    long min = 4294967296;

    if (n < 10){
    my_putchar(n + 48);
    } else if (n >= 10){
        my_put_long_int(n / 10);
        my_putchar(n % 10 + 48);
    } else {
        my_put_long_int(min);
    }
    return 1;
}
