/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void draw_pal(killer *win, char **map, rpg *r)
{
    element_t palm = {win->spal, win->tpal, win->pal_pos};
    draw_element(win, 'p', &palm, r);
}

void draw_mur(killer *win, char **map, rpg *r)
{
    element_t mur = {win->my_sprite, win->my_texture, win->mur_pos};
    draw_element(win, '#', &mur, r);
}

void draw_water(killer *win, char **map, rpg *r)
{
    element_t water = {win->wp, win->wt, win->w_pos};
    draw_element(win, 'W', &water, r);
}

void draw_tree(killer *win, char **map, rpg *r)
{
    element_t tree = {win->sp, win->st, win->tree_pos};
    draw_element(win, 'F', &tree, r);
}

void draw_house(killer *win, char **map, rpg *r)
{
    element_t house = {win->sz, win->zs, win->house_pos};
    draw_element(win, 'M', &house, r);
}
