/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

int return_nbtabdir(void)
{
    struct dirent *file;
    DIR *stream = opendir(".");
    int nbtab = 0;

    file = readdir(stream);
    while (file != NULL){
        if (file->d_name[0] == '.'){
            file = readdir(stream);
        } else {
                file = readdir(stream);
                nbtab++;
        }
    }
    closedir(stream);
    return nbtab;
}
