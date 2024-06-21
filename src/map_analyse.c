/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

int gen_map(char **av)
{
    int nb_linegen = to_number(av[1]);
    char **genmap = malloc((nb_linegen + 1) * (sizeof(char *)));
    int i;

    genmap[nb_linegen] = 0;
    if (nb_linegen == -1)
        return 84;
    for (i = 0; i < nb_linegen; i++){
            genmap[i] = malloc((nb_linegen + 1) * (sizeof(char)));
            genmap[i][nb_linegen] = '\0';
    }
    genmap = rempli_map_gen(genmap, nb_linegen, av);
    find_square(genmap);
    print_and_free_2darr(nb_linegen, genmap);
    return 0;
}

char **rempli_map(int nbline, int nb_map, const char *map, char **mapc)
{
    int cpt = 0;
    int c2 = 0;

    for (cpt = 0; nbline > cpt; cpt++) {
        for (; map[nb_map] != '\n'; nb_map++) {
            mapc[cpt][c2] = map[nb_map];
            c2++;
        }
        nb_map++;
        c2 = 0;
    }
    return mapc;
}

char *map(char *av)
{
    struct stat buf;
    int statsize = 0;
    char *buffer;
    int stat_return = 0;

    stat_return = stat(av, &buf);
    if (stat_return == -1){
        return NULL;
    }
    statsize = buf.st_size;
    buffer = malloc((statsize + 1) * (sizeof(char)));
    buffer[statsize] = '\0';
    return buffer;
}

int error_size_char(int get_number, int nb_line, char *buffer)
{
    if (get_number == nb_line){
        nb_line_equal_line_one(buffer, nb_line);
    } else {
        return 84;
    }
    if (get_number == -1)
        return 84;
    return 0;
}

int mapanalyse(char **av)
{
    int fail = 0;
    char *buffer;
    int mapsize = 0;
    int nb_line = 0;
    int get_number = 0;

    buffer = map(av[1]);
    if (buffer == NULL)
        return 84;
    mapsize = filesize(av[1]);
    if (mapsize == 0)
        return 84;
    fail = error(av[1], buffer, mapsize);
    get_number = my_get_number(buffer);
    nb_line = my_strlen_nb_line(buffer);
    fail = error_size_char(get_number, nb_line, buffer);
    return fail;
}
