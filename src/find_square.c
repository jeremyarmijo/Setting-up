/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include "my.h"

static int verif(find_pos_t *pos, int cpt, char **map)
{
    for (pos->xbis = 0; pos->xbis <= cpt; pos->xbis++) {
        if (map[pos->y + pos->ybis]
        [pos->x + pos->xbis] == 'o') {
            return cpt;
        }
    }
    return -5;
}

int ver(find_pos_t *pos, int cpt, char **map)
{
    for (pos->ybis = 0; pos->ybis <= cpt
    && map[pos->y + pos->ybis] != NULL; pos->ybis++) {
        if (verif(pos, cpt, map) == cpt) {
            return cpt;
        }
    }
    if (pos->ybis != pos->xbis) {
        return cpt;
    }
    return -5;
}

find_pos_t init(int y, int x)
{
    find_pos_t pos;

    pos.x = x;
    pos.y = y;
    pos.xbis = 0;
    pos.ybis = 0;
    return pos;
}

int size_square(char **map, int y, int x)
{
    find_pos_t position = init(y, x);
    int dif = 0;
    int dif2 = 0;
    int cpt = 0;
    int tmp = 0;

    for (; map[y][x + dif] == '.'; dif++);
    for (; map[y + dif2] != NULL
    && map[y + dif2][x] == '.'; dif2++);
    for (cpt = 0; cpt < dif; cpt++) {
        tmp = ver(&position, cpt, map);
        if (tmp == cpt) {
            return cpt;
        }
    }
    return cpt;
}

void print_square(find_square_t *size, char **map)
{
    for (int tmp = 0; tmp < size->size; tmp++) {
        for (int a = 0; a < size->size; a++) {
            map[size->y + tmp][size->x + a] = 'x';
        }
    }
}

static void which_square(char **map,
    int biggest_square, int i, find_square_t *size)
{
    for (int c = 0; map[i][c] != '\0'; c++) {
        biggest_square = size_square(map, i, c);
        if (size->size < biggest_square) {
            size->x = c;
            size->y = i;
            size->size = biggest_square;
        }
    }
}

void find_square(char **map)
{
    int biggest_square = 0;
    find_square_t size;

    size.x = 0;
    size.y = 0;
    size.size = 0;
    for (int i = 0; map[i] != NULL; i++) {
        which_square(map, biggest_square, i, &size);
    }
    if (size.size > 1)
        print_square(&size, map);
    return;
}
