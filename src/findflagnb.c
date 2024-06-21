/*
** EPITECH PROJECT, 2023
** lib
** File description:
** pour la lib
*/
#include "my.h"

int findflagnb(const char *str, char c)
{
    int count = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            count++;
        }
        i++;
    }
    return count;
}
