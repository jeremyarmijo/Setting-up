/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_strlen_line(const char *str)
{
    int i = 0;

    while (str[i] != '\n'){
        i++;
    }
    return i;
}

void fs_print_first_line(char const *filepath)
{
    int fd = 0;
    int size = 0;
    char buffer[500];
    int nb = 0;

    fd = open(filepath, O_RDONLY);
    size = read(fd, buffer, 500);
    nb = my_strlen_line(buffer);
    write(1, buffer, nb);
    close(fd);
}
