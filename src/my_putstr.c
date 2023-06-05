/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** Display an array of string
*/

#include <unistd.h>

int my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
}
