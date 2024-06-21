/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

char **list(int nbdir)
{
    struct dirent *file;
    DIR *stream = opendir(".");
    int nbtab = 0;
    char **buffer;

    buffer = malloc((sizeof(char *)*(nbdir + 1)));
    file = readdir(stream);
    while (file != NULL){
        if (file->d_name[0] == '.'){
            file = readdir(stream);
        } else {
                buffer[nbtab] = file->d_name;
                file = readdir(stream);
                nbtab++;
        }
    }
    buffer[nbtab] = NULL;
    closedir(stream);
    return buffer;
}
