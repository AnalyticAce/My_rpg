/*
** EPITECH PROJECT, 2023
** destroyer
** File description:
** destroyer
*/

#include "../include/my_lib.h"

void destroyer2(killer *win)
{
    sfSprite_destroy(win->pss);
    sfSprite_destroy(win->ar1sp);
    sfSprite_destroy(win->ar3sp);
    sfSprite_destroy(win->ar2sp);
    sfSprite_destroy(win->pm1s);
    sfSprite_destroy(win->pm2s);
    sfSprite_destroy(win->jd1s);
    sfSprite_destroy(win->v1s);
    sfSprite_destroy(win->v2s);
    sfSprite_destroy(win->fn1s);
    sfSprite_destroy(win->fn2s);
    sfSprite_destroy(win->fn3s);
    sfSprite_destroy(win->fn4s);
    sfSprite_destroy(win->cl1s);
    sfSprite_destroy(win->s_ban);
    sfSprite_destroy(win->rys);
    sfSprite_destroy(win->ws);
}

void destroyer3(killer *win)
{
    sfTexture_destroy(win->ar1tx);
    sfTexture_destroy(win->ar2tx);
    sfTexture_destroy(win->ar3tx);
    sfTexture_destroy(win->pm1t);
    sfTexture_destroy(win->pm2t);
    sfTexture_destroy(win->jd1t);
    sfTexture_destroy(win->v1t);
    sfTexture_destroy(win->v2t);
    sfTexture_destroy(win->v3t);
    sfTexture_destroy(win->fn1t);
    sfTexture_destroy(win->fn2t);
    sfTexture_destroy(win->fn4t);
    sfTexture_destroy(win->t_ban);
    sfTexture_destroy(win->ryt);
    sfTexture_destroy(win->ptt);
    sfTexture_destroy(win->wwt);
}

void destroyer(killer *win)
{
    sfSprite_destroy(win->sz);
    sfSprite_destroy(win->my_sprite);
    sfSprite_destroy(win->sp);
    sfSprite_destroy(win->wp);
    sfTexture_destroy(win->my_texture);
    sfTexture_destroy(win->st);
    sfTexture_destroy(win->wt);
    destroyer2(win);
    destroyer3(win);
}
