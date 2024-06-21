/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

void freemap(char **map, char *buffer, int nb_line)
{
    int i = 0;

    for (; i < nb_line; i++){
        free(map[i]);
    }
    free(map);
    free(buffer);
}

int reset_pattern(int nb_charpat, int taillepathern)
{
    if (nb_charpat == taillepathern){
            nb_charpat = 0;
        }
    return nb_charpat;
}
