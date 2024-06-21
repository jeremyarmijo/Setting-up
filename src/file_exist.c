/*
** EPITECH PROJECT, 2023
** l s
** File description:
** first version
*/
#include "my.h"

void file_exist(char **av, char **filedir, int nbdir)
{
    int cpt2 = 0;
    int p = 0;

    while (filedir[cpt2] != NULL){
        p = my_strcmp(av[1], filedir[cpt2]);
            if (p == 1){
                break;
            }
            cpt2++;
    }
    if (cpt2 != nbdir) {
        my_printf("%s\n", filedir[cpt2]);
    }
}
