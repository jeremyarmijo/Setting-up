/*
** EPITECH PROJECT, 2023
** printf
** File description:
** %e
*/
#include "my.h"

void my_put_scientific_notation(double nb)
{
    int nbi = 0;
    int nbp = 0;
    int nbf = 0;
    int count = 0;

    while (nb >= 10) {
        nb = nb / 10;
        count++;
    }
    nbi = nb;
    nbp = nbi * 1000000;
    nbf = nb * 1000000 - (nbp);
    display_output(nb, nbf, count);
}
