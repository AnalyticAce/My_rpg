/*
** EPITECH PROJECT, 2023
** event_opt.c
** File description:
** event of option part
*/

#include "../include/my_lib.h"

void evt_p1(rpg *r)
{
    if ((r->opt_po.y >= r->sf_volno.top && r->opt_po.y
        <= r->sf_volno.top + r->sf_volno.height)
        && (r->opt_po.x >= r->sf_volno.left && r->opt_po.x
        <= r->sf_volno.left + r->sf_volno.width)){
        sfMusic_pause(r->mdv_m);r->cptmus++;printf("%d\n", r->cptmus);
    }if (r->cptmus > 1){
        sfMusic_play(r->mdv_m);r->cptmus = 0;
    }
    if ((r->opt_po.y >= r->sf_voldw.top && r->opt_po.y
        <= r->sf_voldw.top + r->sf_voldw.height)
        && (r->opt_po.x >= r->sf_voldw.left && r->opt_po.x
        <= r->sf_voldw.left + r->sf_voldw.width)){
        sfMusic_setVolume(r->mdv_m, sfMusic_getVolume(r->mdv_m) - 10);
    }
}

void evt_opt(rpg *r)
{
    r->opt_po = sfMouse_getPositionRenderWindow(r->window);
    r->sf_volno = sfRectangleShape_getGlobalBounds(r->no_vol);
    r->sf_voldw = sfRectangleShape_getGlobalBounds(r->d_vol);
    r->sf_volup = sfRectangleShape_getGlobalBounds(r->up_vol);
    r->sf_back = sfRectangleShape_getGlobalBounds(r->back_opt);
    if (r->event.type == sfEvtMouseButtonPressed){
        evt_p1(r);
        if ((r->opt_po.y >= r->sf_volup.top && r->opt_po.y
            <= r->sf_volup.top + r->sf_volup.height)
            && (r->opt_po.x >= r->sf_volup.left && r->opt_po.x
            <= r->sf_volup.left + r->sf_volup.width)){
            sfMusic_setVolume(r->mdv_m, sfMusic_getVolume(r->mdv_m) + 10);
        }if ((r->opt_po.y >= r->sf_back.top && r->opt_po.y
            <= r->sf_back.top + r->sf_back.height)
            && (r->opt_po.x >= r->sf_back.left && r->opt_po.x
            <= r->sf_back.left + r->sf_back.width)){
            f_menu(r);
        }
    }
}

void dis_opt(rpg *r)
{
    sfRenderWindow_clear(r->window, sfBlack);
    sfRenderWindow_drawSprite(r->window, r->sopt_b, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->big_vol, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->d_vol, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->no_vol, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->up_vol, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->back_opt, NULL);
    sfRenderWindow_display(r->window);
}

void destr_opt(rpg *r)
{
    sfRectangleShape_destroy(r->d_vol);
    sfRectangleShape_destroy(r->big_vol);
    sfRectangleShape_destroy(r->no_vol);
    sfRectangleShape_destroy(r->up_vol);
    sfRectangleShape_destroy(r->back_opt);
    sfSprite_destroy(r->sopt_b);
}
