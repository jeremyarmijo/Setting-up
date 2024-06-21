/*
** EPITECH PROJECT, 2023
** printd
** File description:
** flag u
*/
#include "my.h"

int my_put_u(long nb)
{
    if (nb >= 0){
        my_put_long_int(nb);
    } else if (nb < 0){
        nb = 4294967296 + nb;
        my_put_long_int(nb);
        return nb;
    }
    return nb;
}
