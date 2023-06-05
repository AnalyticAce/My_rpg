/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void free_tab(char **tab)
{
    int c = 0;
    for (c = 0; tab[c] != NULL; c++){
        free(tab[c]);
    }free(tab);
}

char **to_one_for_two(char *str, char sp)
{
    int i = 0, j = 0, z = 0;int size = 0;size = my_strlen(str);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == sp)
            z++;
    }z++;
    char **tab = malloc(sizeof(char *) * (z + 1));
    tab[0] = NULL;
    for (int g = 0; g < z; g++){
        tab[g] = malloc(sizeof(char) * (size + 1));
        tab[g][0] = '\0';
    }int a = 0, b = 0, c = 0;
    for (a = 0; str[a] != '\0'; a++){
        if (str[a] == sp || str[a] == '\0'){
            tab[b][c] = '\0';c = 0;b++;
        }else{
            tab[b][c] = str[a];c++;
        }
    }tab[b][c + 1] = '\0';tab[b + 1] = NULL;
    return tab;
}

char **parsing_string(char *str, int max_size)
{
    char **map = to_one_for_two(str, '\n');
    return map;
}

int nb_slash(char *str)
{
    int i = 0;
    int j = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            j++;
        }
    }
    return (j + 1);
}

char *openfile(char *file_name)
{
    struct stat info;
    stat(file_name, &info);
    int a = info.st_size;
    char *buffer = malloc(sizeof(char) * (a + 1));
    if (buffer == NULL) return NULL;
    int sd = open(file_name, O_RDONLY);
    int r = read(sd, buffer, a);
    close(sd); buffer[r] = '\0';
    return (buffer);
}
