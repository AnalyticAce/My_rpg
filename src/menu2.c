/*
** EPITECH PROJECT, 2023
** menu2.c
** File description:
** seconf part of the menu
*/

#include "../include/my_lib.h"

void b_options(rpg *r)
{
    sfTexture *opt = sfTexture_createFromFile("images/options.png", NULL);
    r->options = sfRectangleShape_create();
    sfRectangleShape_setSize(r->options, (sfVector2f){250, 70});
    sfRectangleShape_setOrigin(r->options, (sfVector2f){100, 20});
    sfRectangleShape_setTexture(r->options, opt, true);
    sfRectangleShape_setPosition(r->options, (sfVector2f){900, 700});
}

void b_jouer(rpg *r)
{
    sfTexture *jou = sfTexture_createFromFile("images/jouer.png", NULL);
    r->jouer = sfRectangleShape_create();
    sfRectangleShape_setSize(r->jouer, (sfVector2f){250, 70});
    sfRectangleShape_setOrigin(r->jouer, (sfVector2f){100, 20});
    sfRectangleShape_setTexture(r->jouer, jou, sfTrue);
    sfRectangleShape_setPosition(r->jouer, (sfVector2f){900, 400});
}

void b_charger(rpg *r)
{
    sfTexture *chag = sfTexture_createFromFile("images/charger.png", NULL);
    r->charger = sfRectangleShape_create();
    sfRectangleShape_setSize(r->charger, (sfVector2f){250, 70});
    sfRectangleShape_setOrigin(r->charger, (sfVector2f){100, 20});
    sfRectangleShape_setTexture(r->charger, chag, sfTrue);
    sfRectangleShape_setPosition(r->charger, (sfVector2f){900, 550});
}

void b_quitter(rpg *r)
{
    sfTexture *quit = sfTexture_createFromFile("images/quitter.png", NULL);
    r->quitter = sfRectangleShape_create();
    sfRectangleShape_setSize(r->quitter, (sfVector2f){250, 70});
    sfRectangleShape_setOrigin(r->quitter, (sfVector2f){100, 20});
    sfRectangleShape_setTexture(r->quitter, quit, sfTrue);
    sfRectangleShape_setPosition(r->quitter, (sfVector2f){900, 850});
}

void menu_dis(rpg *r)
{
    sfRenderWindow_clear(r->window, sfBlack);
    sfRenderWindow_drawSprite(r->window, r->sback, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->jouer, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->charger, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->options, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->quitter, NULL);
    if (r->h_v == 1){
        sfRenderWindow_drawRectangleShape(r->window, r->help_rect, NULL);
    }
    sfRenderWindow_drawRectangleShape(r->window, r->icon_rec, NULL);
    sfRenderWindow_display(r->window);
}
