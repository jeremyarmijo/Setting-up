/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int nb_ligne_nbchar(char *buffer)
{
    int p = 0;
    int cpt = 0;
    int cpt2 = 0;
    int res = 0;

    while (buffer[p] != '\n'){
        p++;
    }
    p++;
    for (cpt = 0; buffer[p] != '\n'; p++) {
        cpt ++;
    }
    for (cpt2 = cpt + p + 1; buffer[cpt2] != '\n'; cpt2++){
        res++;
    }
    if (res != cpt)
        return 84;
    return 0;
}

int error(char *av, char *buffer, int mapsize)
{
    int i = 0;
    int fd = 0;

    fd = fs_open_file(av);
    read(fd, buffer, mapsize);
    if (fd == 84){
        return 84;
    }
    while (buffer[i] != '\n'){
        if (buffer[i] < '0' || buffer[i] > '9'){
            return 84;
        }
        i++;
    }
    return 0;
}
