/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void draw_buson(killer *win, char **map, rpg *r)
{
    element_t buson = {win->sbuson, win->tbuson, win->buson_pos};
    draw_element(win, '2', &buson, r);
}

void draw_evil(killer *win, char **map, rpg *r)
{
    element_t evil = {win->sevil, win->tevil, win->evil_pos};
    draw_element(win, 'E', &evil, r);
}

void draw_toubiyon(killer *win, char **map, rpg *r)
{
    element_t toubiyon = {win->stoubiyon, win->ttoubiyon, win->toubiyon_pos};
    draw_element(win, 'Y', &toubiyon, r);
}

void draw_fleur1(killer *win, char **map, rpg *r)
{
    element_t fleur1 = {win->sfleur1, win->tfleur1, win->fleur1_pos};
    draw_element(win, '3', &fleur1, r);
}

void draw_fleur2(killer *win, char **map, rpg *r)
{
    element_t fleur2 = {win->sfleur2, win->tfleur2, win->fleur2_pos};
    draw_element(win, '4', &fleur2, r);
}
