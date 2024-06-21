/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int nb_map_sans_l_un(const char *str)
{
    int i = 0;
    int nb_cols = 0;

    while (str[i] != '\n'){
        i++;
        nb_cols++;
    }
    return nb_cols + 1;
}
