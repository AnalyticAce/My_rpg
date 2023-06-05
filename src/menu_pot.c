/*
** EPITECH PROJECT, 2023
** menu_pot.c
** File description:
** option menu
*/

#include "../include/my_lib.h"

void menu_opt(rpg *r)
{
    r->opt_b = sfTexture_createFromFile("images/optbkj.jpg", NULL);
    r->sopt_b = sfSprite_create();r->cptmus = 0;
    sfSprite_setTexture(r->sopt_b, r->opt_b, sfTrue);
    rec_bigvol(r);rec_bk(r);rec_dvol(r);rec_novol(r);rec_upvol(r);
    while (sfRenderWindow_isOpen(r->window)){
        while (sfRenderWindow_pollEvent(r->window, &r->event)){
            event_rpg(r);
            evt_opt(r);
        }dis_opt(r);
    }destr_opt(r);
}
