/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int filesize(char *av)
{
    struct stat buf;
    int statsize = 0;

    stat(av, &buf);
    statsize = buf.st_size;
    return statsize;
}
