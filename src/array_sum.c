/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** write int in oct
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <unistd.h>

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

    while (i < size - 1){
            if (i == 0){
                sum = arr[i] + arr[i + 1];
            } else {
                sum = sum + arr[i + 1];
            }
        i++;
    }
    my_put_nbr(sum);
    return sum;
}
