/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

void onefiledot(char **)
{
    struct dirent *file;
    DIR *stream = opendir(".");

    file = readdir(stream);
    while (file != NULL) {
        if (file->d_name[0] == '.' && file->d_name[1] == '\0'){
            my_printf("%s  ", file->d_name);
        }
    file = readdir(stream);
    }
    my_printf("\n");
}
