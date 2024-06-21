/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** write int in oct
*/
#include "my.h"

int gen_map_error(char **av)
{
    int gen_rt = 0;
    int fail = 0;

    gen_rt = my_strlen(av[2]);
    if (gen_rt == 0)
        return 84;
    for (int i = 0; av[2][i] != '\0'; i++)
        if (av[2][i] != '.' && av[2][i] != 'o')
            return 84;
    fail = gen_map(av);
    return fail;
}

int main(int ac, char **av)
{
    int fail = 0;

    if (ac == 1 || ac > 3)
        return 84;
    if (ac == 2){
        fail = mapanalyse(av);
    }
    if (ac == 3){
    fail = gen_map_error(av);
    }
    return fail;
}
