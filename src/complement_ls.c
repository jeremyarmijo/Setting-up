/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

int complement_ls(char **av, char **listdir, int nbdir)
{
    int a = 0;
    int error = 0;

    a = (my_strlen(av[1]) - 1);
    if (av[1][a] == '/') {
            openfile_dir(av);
        } else {
            error = file_noexist(av, listdir, nbdir);
            file_exist(av, listdir, nbdir);
    }
    return error;
}
