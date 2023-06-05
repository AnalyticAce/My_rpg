/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void sprite_without_scale_1(killer *win)
{
    win->my_texture = sfTexture_createFromFile("images/Idle.png", NULL);
    win->my_sprite = sfSprite_create();
    win->st = sfTexture_createFromFile("images/tree.png", NULL);
    win->sp = sfSprite_create();
    win->wt = sfTexture_createFromFile("images/water.png", NULL);
    win->wp = sfSprite_create();
    win->ct = sfTexture_createFromFile("images/road2.png", NULL);
    win->cp = sfSprite_create();
    win->pt = sfTexture_createFromFile("images/pont.png", NULL);
    win->pp = sfSprite_create();
    win->gp = sfTexture_createFromFile("images/grass.png", NULL);
    win->pg = sfSprite_create();
    win->t_ban = sfTexture_createFromFile("images/bandit.png", NULL);
    win->s_ban = sfSprite_create();
    sfVector2f scale8 = {0.15, 0.15f};
    sfSprite_setScale(win->s_ban, scale8);
}

void sprite_without_scale(killer *win)
{
    sprite_without_scale_1(win);
    win->tf = sfTexture_createFromFile("images/fleur.png", NULL);
    win->sf = sfSprite_create();
    win->tpal = sfTexture_createFromFile("images/palmier2.png", NULL);
    win->spal = sfSprite_create();
    win->tgrill = sfTexture_createFromFile("images/grill.png", NULL);
    win->sgrill = sfSprite_create();
    win->ttrou = sfTexture_createFromFile("images/trou.png", NULL);
    win->strou = sfSprite_create();
    win->tpuit = sfTexture_createFromFile("images/puit.png", NULL);
    win->spuit = sfSprite_create();
    win->tlotus = sfTexture_createFromFile("images/lotus.png", NULL);
    win->slotus = sfSprite_create();
    win->tbuson = sfTexture_createFromFile("images/buson.png", NULL);
    win->sbuson = sfSprite_create();
}

void sprite_with_scale_1(killer *win)
{
    win->tevil = sfTexture_createFromFile("images/evilf.png", NULL);
    win->sevil = sfSprite_create();
    sfVector2f scale3 = {1.0, 1.0f};
    sfSprite_setScale(win->sevil, scale3);
    win->ttoubiyon = sfTexture_createFromFile("images/toubiyon.png", NULL);
    win->stoubiyon = sfSprite_create();
    sfVector2f scale4 = {1.5, 1.5f};
    sfSprite_setScale(win->stoubiyon, scale4);
    win->thouse2 = sfTexture_createFromFile("images/house2.png", NULL);
    win->shouse2 = sfSprite_create();
    sfVector2f scale7 = {2.5, 2.5f};
    sfSprite_setScale(win->shouse2, scale7);
}

void sprite_with_scale(killer *win)
{
    sprite_with_scale_1(win);
    win->tfleur1 = sfTexture_createFromFile("images/fleur1.png", NULL);
    win->sfleur1 = sfSprite_create();
    sfVector2f scale5 = {1.0, 1.0f};
    sfSprite_setScale(win->sfleur1, scale5);
    win->tfleur2 = sfTexture_createFromFile("images/fleur2.png", NULL);
    win->sfleur2 = sfSprite_create();
    sfVector2f scale6 = {1.0, 1.0f};
    sfSprite_setScale(win->sfleur2, scale6);
    win->zs = sfTexture_createFromFile("images/house.png", NULL);
    win->sz = sfSprite_create();
    sfVector2f scale = {2.5f, 2.5f};
    sfSprite_setScale(win->sz, scale);
    win->tpalace = sfTexture_createFromFile("images/palace.png", NULL);
    win->spalace = sfSprite_create();
    sfVector2f scale1 = {4.0f, 4.0f};
    sfSprite_setScale(win->spalace, scale1);
}
