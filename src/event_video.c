/*
** EPITECH PROJECT, 2023
** event_video.c
** File description:
** to manage event and window
*/

#include "../include/my_lib.h"

void video(rpg *r)
{
    r->video.width = 1920;
    r->video.height = 1080;
    r->video.bitsPerPixel = 32;
    r->window = sfRenderWindow_create(r->video,
        "My_Rpg.", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(r->window, 120);
    sfRenderWindow_setVerticalSyncEnabled(r->window, sfFalse);

}

void event_rpg(rpg *r)
{
    if (r->event.type == sfEvtClosed){
        sfRenderWindow_close(r->window);
    }
}

void menu_event(rpg *r)
{
    select_m(r);r->mou_pos = sfMouse_getPositionRenderWindow(r->window);
    if (r->event.type == sfEvtMouseMoved) select_op(r, r->mou_pos);
    if (r->event.type == sfEvtMouseButtonPressed){
        if ((r->mou_pos.y >= r->jou_pos.top && r->mou_pos.y
            <= r->jou_pos.top + r->jou_pos.height)
            && (r->mou_pos.x >= r->jou_pos.left && r->mou_pos.x
            <= r->jou_pos.left + r->jou_pos.width)){
            chargement(r);
        }if ((r->mou_pos.y >= r->qui_pos.top && r->mou_pos.y
            <= r->qui_pos.top + r->qui_pos.height)
            && (r->mou_pos.x >= r->qui_pos.left && r->mou_pos.x
            <= r->qui_pos.left + r->qui_pos.width)){
            sfRenderWindow_close(r->window);
        }if ((r->mou_pos.y >= r->opt_pos.top && r->mou_pos.y
            <= r->opt_pos.top + r->opt_pos.height)
            && (r->mou_pos.x >= r->opt_pos.left && r->mou_pos.x
            <= r->opt_pos.left + r->opt_pos.width)){
            menu_opt(r);
        }
    }help_evt(r);
}
