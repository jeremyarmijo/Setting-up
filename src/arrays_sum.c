/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int n)
{
    int max = 2147483647;
    int min = -2147483648;

    if (n == max){
        return max;
    }
    if (n == min){
        return min;
    }
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n >= 0 && n < 10){
        my_putchar(n + 48);
    } else {
        my_put_nbr(n / 10);
        my_putchar(n % 10 + 48);
    }
    return 1;
}

int array_1d_sum(int const *arr, int size)
{
    int i = 0;
    int sum = 0;

    while (i < size){
        sum = sum + arr[i];
        i++;
    }
    return sum;
}

int array_2d_sum(int **arr, int nb_tab, int nbvalue)
{
    int sum = 0;
    int a = 0;

    while (a < nb_tab){
        sum = sum + array_1d_sum(arr[a], nbvalue);
        a++;
    }
    my_put_nbr(sum);
    return sum;
}
