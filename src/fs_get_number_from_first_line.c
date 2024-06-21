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
#include <stdio.h>

int nb_dif_char(const char *buffer, int i, int nbr)
{
    if (buffer[i] >= '0' && buffer[i] <= '9'){
        nbr = nbr * 10 + buffer[i] - 48;
    } else if (buffer[i] != '.' && buffer[i] != 'o' && buffer[i] != '\n'){
        return 0;
    }
    return nbr;
}

int my_get_number(const char *buffer)
{
    int i = 0;
    int nbr = 0;
    int x = 0;

    while (buffer[x] != '\n') {
        if (buffer[x] < 48
        || buffer[x] > 57)
            return -1;
        x++;
    }
    while (buffer[i] != '\0'){
        nbr = nb_dif_char(buffer, i, nbr);
        i++;
    }
    return nbr;
}

int my_strlen_line(const char *str)
{
    int i = 0;

    while (str[i] != '\n'){
        i++;
    }
    return i;
}

int fs_get_number_from_first_line(char const *filepath)
{
    int fd = 0;
    char buffer[500];
    int res = 0;

    fd = open(filepath, O_RDONLY);
    read(fd, buffer, 500);
    res = my_get_number(buffer);
    close(fd);
    return res;
}
