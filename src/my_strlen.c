/*
** EPITECH PROJECT, 2023
** headers
** File description:
** function for my_printf
*/
#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return i;
}
