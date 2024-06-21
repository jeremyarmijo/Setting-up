/*
** EPITECH PROJECT, 2023
** bs
** File description:
** in c
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"

int fs_open_file(char const *filepath)
{
    int fd;

    fd = open(filepath, O_RDONLY);
    if (fd == -1){
        return 84;
    } else {
        return fd;
    }
    return (fd);
}
