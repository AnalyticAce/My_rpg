/*
** EPITECH PROJECT, 2023
** collision2
** File description:
** collision2
*/

#include "../include/my_lib.h"

void petit_setarbre7(killer *win)
{
    win->ryt = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->rys = sfSprite_create();
    sfSprite_setTexture(win->rys, win->ryt, sfTrue);
    win->rypos.x = 980; win->rypos.y = 80;
    win->ryscal.x = 0.5; win->ryscal.y = 2.5;
    sfSprite_setPosition(win->rys, win->rypos);
    sfSprite_setScale(win->rys, win->ryscal);
    win->ptt = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->pss = sfSprite_create();
    sfSprite_setTexture(win->pss, win->ptt, sfTrue);
    win->ponpos.x = 700; win->ponpos.y = 1050;
    win->ponscal.x = 1; win->ponscal.y = 1;
    sfSprite_setPosition(win->pss, win->ponpos);
    sfSprite_setScale(win->pss, win->ponscal);
}

void setarbre8(killer *win)
{
    win->wwt = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->ws = sfSprite_create();
    sfSprite_setTexture(win->ws, win->wwt, sfTrue);
    win->wpos.x = 700; win->wpos.y = 780;
    win->wscal.x = 1; win->wscal.y = 1;
    sfSprite_setPosition(win->ws, win->wpos);
    sfSprite_setScale(win->ws, win->wscal);
}
