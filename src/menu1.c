/*
** EPITECH PROJECT, 2023
** menu1.c
** File description:
** first part of the menu
*/

#include "../include/my_lib.h"

void select_m(rpg *r)
{
    if (r->tch == 1){
        sfRectangleShape_setOutlineThickness(r->jouer, 2);
        sfRectangleShape_setOutlineColor(r->jouer, sfRed);
    }if (r->tch == 2){
        sfRectangleShape_setOutlineThickness(r->charger, 2);
        sfRectangleShape_setOutlineColor(r->charger, sfBlack);
    }if (r->tch == 3){
        sfRectangleShape_setOutlineThickness(r->options, 2);
        sfRectangleShape_setOutlineColor(r->options, sfBlack);
    }if (r->tch == 4){
        sfRectangleShape_setOutlineThickness(r->quitter, 2);
        sfRectangleShape_setOutlineColor(r->quitter, sfBlack);
    }if (r->event.type == sfEvtKeyPressed && r->event.key.code ==
        sfKeyLControl) {
        r->window = sfRenderWindow_create(r->video, "My_Rpg.",
        sfFullscreen, NULL);
        r->win_ctrl = 1;
    }
}

int select_op(rpg *r, sfVector2i mou_pos)
{
    r->jou_pos = sfRectangleShape_getGlobalBounds(r->jouer);
    r->chag_pos = sfRectangleShape_getGlobalBounds(r->charger);
    r->opt_pos = sfRectangleShape_getGlobalBounds(r->options);
    r->qui_pos = sfRectangleShape_getGlobalBounds(r->quitter);
    select_m(r);
}

void menu_destroy(rpg *r)
{
    sfRectangleShape_destroy(r->jouer);
    sfRectangleShape_destroy(r->charger);
    sfRectangleShape_destroy(r->options);
    sfRectangleShape_destroy(r->quitter);
    sfTexture_destroy(r->back);sfSprite_destroy(r->sback);
    sfRectangleShape_destroy(r->icon_rec);
    sfRectangleShape_destroy(r->help_rect);
}

void menu_init(rpg *r)
{
    b_charger(r);b_jouer(r);b_options(r);b_quitter(r);
    r->back = sfTexture_createFromFile("images/backm.jpg", NULL);
    r->sback = sfSprite_create();r->tch = 0;
    sfSprite_setTexture(r->sback, r->back, sfTrue);
}

void f_menu(rpg *r)
{
    menu_init(r);play_music(r);help_rec(r);r->win_ctrl = 0;
    while (sfRenderWindow_isOpen(r->window)){
        while (sfRenderWindow_pollEvent(r->window, &r->event)){
            event_rpg(r);menu_event(r);
        }menu_dis(r);
    }menu_destroy(r);
}
