/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

void allfiles()
{
    DIR *stream = opendir(".");
    struct dirent *file;

    file = readdir(stream);
    while (file != NULL) {
        my_printf("%s  ", file->d_name);
        file = readdir(stream);
    }
    my_printf("\n");
    closedir(stream);
}
