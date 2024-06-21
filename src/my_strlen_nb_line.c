/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int my_strlen_nb_line(const char *str)
{
    int i = 0;
    int cpt = 0;
    int nb_cols = 0;
    int nb_char = 0;

    while (str[i] != '\n'){
        i++;
        nb_cols++;
    }
    cpt = nb_cols + 1;
    while (str[cpt] != 0){
        if (str[cpt] == '\n'){
            nb_char++;
        }
        cpt++;
    }
    return nb_char;
}
