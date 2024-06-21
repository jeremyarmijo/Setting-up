/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** write int in oct
*/
#include "my.h"


int to_number(char const *str)
{
    int i = 0;
    int nbr = 0;

    while (str[i] != '\0'){
        if (str[i] >= '0' && str[i] <= '9')
            nbr = nbr * 10 + str[i] - 48;
        if (str[i] == '-')
            return -1;
        i++;
    }
    return nbr;
}

int my_put_oct(int n)
{
    if (n >= 0 && n < 8) {
        my_putchar(n + 48);
    } else {
        my_put_oct(n / 8);
        my_putchar(n % 8 + 48);
    }
    return 1;
}
