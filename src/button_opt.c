/*
** EPITECH PROJECT, 2023
** button_opt.c
** File description:
** buttons of options
*/

#include "../include/my_lib.h"

void rec_bigvol(rpg *r) 
{
    r->big_vol = sfRectangleShape_create();
    r->scal.x = 770; r->scal.y = 500;
    sfVector2f pos = {(r->video.width / 2) - (r->scal.x / 2),
    (r->video.height / 2) - (r->scal.y / 2)};
    sfRectangleShape_setSize(r->big_vol, r->scal);r->ep = 2.;
    sfRectangleShape_setPosition(r->big_vol, pos);
    sfRectangleShape_setFillColor(r->big_vol, sfTransparent);
    sfRectangleShape_setOutlineThickness(r->big_vol, r->ep);
    sfRectangleShape_setOutlineColor(r->big_vol, sfBlue);
}

void rec_novol(rpg *r)
{
    sfTexture *vol_m = sfTexture_createFromFile("images/vol_m.png", NULL);
    r->no_vol = sfRectangleShape_create();
    sfVector2f no_sc = {100, 100};
    sfVector2f no_pos = {(r->video.width / 2) - (r->scal.x / 2) + 110,
    (r->video.height / 2) - 50};
    sfRectangleShape_setSize(r->no_vol, no_sc);
    sfRectangleShape_setPosition(r->no_vol, no_pos);
    sfRectangleShape_setTexture(r->no_vol, vol_m, sfTrue);
    sfRectangleShape_setOutlineThickness(r->no_vol, r->ep);
    sfRectangleShape_setOutlineColor(r->no_vol, sfBlue);
}

void rec_dvol(rpg *r)
{
    sfTexture *vol_d = sfTexture_createFromFile("images/vol_d.png", NULL);
    r->d_vol = sfRectangleShape_create();
    sfVector2f d_sc = {100, 100};
    sfVector2f d_pos = {(r->video.width / 2) - (r->scal.x / 2) + 310,
    (r->video.height / 2) - 50};
    sfRectangleShape_setSize(r->d_vol, d_sc);
    sfRectangleShape_setPosition(r->d_vol, d_pos);
    sfRectangleShape_setOutlineThickness(r->d_vol, r->ep);
    sfRectangleShape_setOutlineColor(r->d_vol, sfBlue);
    sfRectangleShape_setTexture(r->d_vol, vol_d, sfTrue);
}

void rec_upvol(rpg *r)
{
    sfTexture *vol_u = sfTexture_createFromFile("images/vol_u.png", NULL);
    r->up_vol = sfRectangleShape_create();
    sfVector2f up_sc = {100, 100};
    sfVector2f up_pos = {(r->video.width / 2) - (r->scal.x / 2) + 520,
    (r->video.height / 2) - 50};
    sfRectangleShape_setSize(r->up_vol, up_sc);
    sfRectangleShape_setPosition(r->up_vol, up_pos);
    sfRectangleShape_setOutlineThickness(r->up_vol, r->ep);
    sfRectangleShape_setOutlineColor(r->up_vol, sfBlue);
    sfRectangleShape_setTexture(r->up_vol, vol_u, sfTrue);
}

void rec_bk(rpg *r)
{
    sfTexture *bk = sfTexture_createFromFile("images/backpng.png", NULL);
    r->back_opt = sfRectangleShape_create();
    sfVector2f bk_sc = {100, 100};
    sfVector2f bk_pos = {0, 0};
    sfRectangleShape_setSize(r->back_opt, bk_sc);
    sfRectangleShape_setPosition(r->back_opt, bk_pos);
    sfRectangleShape_setTexture(r->back_opt, bk, sfTrue);
    sfRectangleShape_setOutlineThickness(r->back_opt, r->ep);
    sfRectangleShape_setOutlineColor(r->back_opt, sfBlue);
}
