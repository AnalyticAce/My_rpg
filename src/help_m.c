/*
** EPITECH PROJECT, 2023
** help_m.c
** File description:
** help menu
*/

#include "../include/my_lib.h"

void help_rec(rpg *r)
{
    sfTexture *help_tx = sfTexture_createFromFile("images/aide.png", NULL);
    r->help_rect = sfRectangleShape_create();
    sfVector2f d_sc = {900, 900};
    sfVector2f d_pos = {r->video.width - 900, 0};
    sfRectangleShape_setSize(r->help_rect, d_sc);
    sfRectangleShape_setPosition(r->help_rect, d_pos);
    sfRectangleShape_setOutlineThickness(r->help_rect, r->ep);
    sfRectangleShape_setTexture(r->help_rect, help_tx, sfTrue);
    r->icon_rec = sfRectangleShape_create();
    sfTexture *icn_txt = sfTexture_createFromFile("images/icn.png", NULL);
    sfVector2f icn_sc = {100, 100};
    sfVector2f icn_pos = {r->video.width - 100, 0};
    sfRectangleShape_setSize(r->icon_rec, icn_sc);
    sfRectangleShape_setPosition(r->icon_rec, icn_pos);
    sfRectangleShape_setOutlineThickness(r->icon_rec, r->ep);
    sfRectangleShape_setOutlineColor(r->icon_rec, sfBlue);
    sfRectangleShape_setTexture(r->icon_rec, icn_txt, sfTrue);
}

void help_evt(rpg *r)
{
    sfBool afficherTexture = sfFalse;r->h_v = 0;
    sfTexture *help_tx = sfTexture_createFromFile("images/aide.png", NULL);
    sfVector2i help_mpos = sfMouse_getPositionRenderWindow(r->window);
    r->help_pos = sfRectangleShape_getGlobalBounds(r->help_rect);
    r->icon_pos = sfRectangleShape_getGlobalBounds(r->icon_rec);
    if (r->event.type == sfEvtMouseMoved){
        if ((help_mpos.y >= r->icon_pos.top && help_mpos.y
            <= r->icon_pos.top + r->icon_pos.height)
            && (help_mpos.x >= r->icon_pos.left && help_mpos.x
            <= r->icon_pos.left + r->icon_pos.width)){
            r->h_v = 1;
        }else{
            r->h_v = 0;
        }
    }
}
