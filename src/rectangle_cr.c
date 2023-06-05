/*
** EPITECH PROJECT, 2023
** rectangle_cr.c
** File description:
** rectangle create
*/

#include "../include/my_lib.h"
sfRectangleShape *dark_r(heros *h, sfVector2f scale, sfVector2f pos, rpg *r)
{
    sfRectangleShape *bar = sfRectangleShape_create();
    sfRectangleShape_setSize(bar, scale);
    sfRectangleShape_setPosition(bar, pos);
    sfRectangleShape_setFillColor(bar, sfBlack);
    return bar;
}

sfRectangleShape *llife(heros *h)
{
    h->vie = 300;
    h->life = sfRectangleShape_create();
    sfVector2f scal = {h->vie, 20};
    sfVector2f pos = {5, 5};
    sfRectangleShape_setSize(h->life, scal);
    sfRectangleShape_setPosition(h->life, pos);
    sfRectangleShape_setFillColor(h->life, sfRed);
}

sfRectangleShape *larm(heros *h)
{
    h->arm = 100;
    h->armor = sfRectangleShape_create();
    sfVector2f scal = {h->arm, 20};
    sfVector2f pos = {5, 25};
    sfRectangleShape_setSize(h->armor, scal);
    sfRectangleShape_setPosition(h->armor, pos);
    sfRectangleShape_setFillColor(h->armor, sfBlue);
}

sfRectangleShape *lexp(heros *h)
{
    h->exp = 1;
    h->expr = sfRectangleShape_create();
    sfVector2f scal = {h->exp, 10};
    sfVector2f pos = {5, 50};
    sfRectangleShape_setSize(h->expr, scal);
    sfRectangleShape_setPosition(h->expr, pos);
    sfRectangleShape_setFillColor(h->expr, sfWhite);
}
