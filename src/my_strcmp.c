/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

int my_strcmp(char *str, char *list)
{
    int i = 0;

    if (my_strlen(str) != my_strlen(list)){
        return 42;
    }
    while (str[i] != '\0'){
        if ((str[i] - list[i]) > 0){
            return 42;
        }
        if ((str[i] - list[i]) < 0) {
            return 42;
        }
        i++;
    }
    return 1;
}
