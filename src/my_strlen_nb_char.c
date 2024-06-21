/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int my_strlen_nb_char(const char *str, int nb)
{
    int l = 0;

    while (str[nb] != '\n'){
        if (str[nb] != '\n'){
            l++;
        }
        nb++;
    }
    return l;
}
