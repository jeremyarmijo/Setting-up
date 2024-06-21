/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

void print_and_free_2darr(int nb, char **map)
{
    int i = 0;

    for (i = 0; i < nb; i++){
            my_printf("%s\n", map[i]);
        }
    for (i = 0; i < nb; i++){
        free(map[i]);
    }
    free(map);
}

char **rempli_map_gen(char **genmap, int nb_linegen, char **av)
{
    int cpt;
    int taillepathern = (my_strlen(av[2]));
    int nb_charpat = 0;
    int c = 0;

    for (c = 0; c < nb_linegen; c++){
        for (cpt = 0; cpt < nb_linegen; cpt++){
            genmap[c][cpt] = av[2][nb_charpat];
            nb_charpat++;
            nb_charpat = reset_pattern(nb_charpat, taillepathern);
        }
    }
    return genmap;
}

void nb_line_equal_line_one(char *buffer, int nb_line)
{
    int size_sans_l_one = 0;
    char **mapcouper;

    size_sans_l_one = nb_map_sans_l_un(buffer);
    mapcouper = my_str_to_word_array(buffer, nb_line, size_sans_l_one);
    find_square(mapcouper);
    print_map_and_free(nb_line, mapcouper, buffer);
}

void print_map_and_free(int nb, char **map2darr, char *buffer)
{
    int i = 0;

    for (i = 0; map2darr[i] != NULL; i++){
        my_printf("%s\n", map2darr[i]);
    }
    freemap(map2darr, buffer, nb);
}

char **my_str_to_word_array(char const *map, int nbline, int nb_mapsanslone)
{
    char **mapcouper;
    int i = 0;
    char **map_rempli;
    int nb_char = 0;

    nb_char = my_strlen_nb_char(map, nb_mapsanslone);
    mapcouper = malloc((nbline + 1) * (sizeof(char *)));
    mapcouper[nbline] = NULL;
    for (i = 0; nbline > i; i++){
        mapcouper[i] = malloc((nb_char + 1) * sizeof(char));
        mapcouper[i][nb_char] = '\0';
    }
    map_rempli = rempli_map(nbline, nb_mapsanslone, map, mapcouper);
    return map_rempli;
}
