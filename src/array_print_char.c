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

void my_putchar(char c)
{
    write(1, &c, 1);
}

void array_1d_print_chars(char const *arr)
{
    int i = 0;

    while (arr[i] != '\0'){
    my_putchar(arr[i]);
    my_putchar('\n');
    i++;
    }
}
