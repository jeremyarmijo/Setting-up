/*
** EPITECH PROJECT, 2023
** my printf
** File description:
** put float
*/
#include "my.h"

int my_put_float(double nb)
{
    long nbi = nb;
    long nbp = nbi * 1000000;
    float nbf = nb * 1000000 - (nbp);

    my_put_nbr(nbi);
    my_putchar('.');
    if (nbf < 0){
        nbf = nbf * -1;
    }
    my_put_nbr(nbf);
    return 1;
}
