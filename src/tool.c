/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenates characters of the str in dest
*/

#include "../include/my_lib.h"

int my_strlen(char *str)
{
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    for (; src[i]; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';
    return (dest);
}

void reverse(char *str)
{
    int len = my_strlen(str);
    int i = 0, j = len - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++; j--;
    }
}

void my_conversion(int num, char *str)
{
    int i = 0, rem = 0, n = num;
    if (num == 0) {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    while (n != 0) {
        rem = n % 10;
        str[i++] = rem + '0';
        n = n / 10;
    }
    str[i] = '\0'; reverse(str);
}
