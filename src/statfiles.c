/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

void statfiles()
{
    struct dirent *file;
    DIR *stream = opendir(".");
    struct stat buf;
    struct passwd *id;

    file = readdir(stream);
    while (file != NULL){
        if (file->d_name[0] == '.'){
            file = readdir(stream);
    } else {
        stat(file->d_name, &buf);
        id = getpwuid(buf.st_uid);
        my_printf("%s  ", id->pw_name);
        my_printf("%s  ", id->pw_name);
        my_printf("%d  ", buf.st_nlink);
        my_printf("%d  ", buf.st_size);
        my_printf("%s\n", file->d_name);
        file = readdir(stream);
        }
    }
}
