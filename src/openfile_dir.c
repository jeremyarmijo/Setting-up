/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

void openfile_dir(char **av)
{
    struct dirent *file;
    DIR *stream = opendir(av[1]);

    if (stream == NULL){
        return;
    }
    file = readdir(stream);
    while (file != NULL){
        if (file->d_name[0] == '.'){
            file = readdir(stream);
    } else {
        my_printf("%s  ", file->d_name);
        file = readdir(stream);
    }
    }
    my_printf("\n");
}
