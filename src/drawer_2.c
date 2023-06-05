/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/


#include "../include/my_lib.h"

void draw_palace(killer *win, char **map, rpg *r)
{
    element_t palace = {win->spalace, win->tpalace, win->palace_pos};
    draw_element(win, 'R', &palace, r);
}

void draw_pont(killer *win, char **map, rpg *r)
{
    element_t pont = {win->pp, win->pt, win->p_pos};
    draw_element(win, 'P', &pont, r);
}

void draw_trou(killer *win, char **map, rpg *r)
{
    element_t trou = {win->strou, win->ttrou, win->trou_pos};
    draw_element(win, 'T', &trou, r);
}

void draw_puit(killer *win, char **map, rpg *r)
{
    element_t puit = {win->spuit, win->tpuit, win->puit_pos};
    draw_element(win, 'Z', &puit, r);
}

void draw_lotus(killer *win, char **map, rpg *r)
{
    element_t lotus = {win->slotus, win->tlotus, win->lotus_pos};
    draw_element(win, '1', &lotus, r);
}
