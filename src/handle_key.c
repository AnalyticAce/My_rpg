/*
** EPITECH PROJECT, 2023
** handle_key.c
** File description:
** to hanple hero moving
*/

#include "../include/my_lib.h"

void handle_key_left(sfSprite* sprite)
{
    int l = 441.25;
    l = sfSprite_getPosition(sprite).x;
    l = l / 10 % 3;
    l = (l * 60);
    sfIntRect rectl = {l, 0, 60, 77};
    sfSprite_setTextureRect(sprite, rectl);
    sfVector2f vaisseau_pos = sfSprite_getPosition(sprite);
    vaisseau_pos.x -= 6;
    sfSprite_setPosition(sprite, vaisseau_pos);
}

void handle_key_right(sfSprite* sprite)
{
    int l = 502;
    l = sfSprite_getPosition(sprite).x;
    l = l / 10 % 3;
    l = (l * 60) + 502;
    sfIntRect rectl = {l, 0, 59, 77};
    sfSprite_setTextureRect(sprite, rectl);
    sfVector2f vaisseau_pos = sfSprite_getPosition(sprite);
    vaisseau_pos.x += 6;
    sfSprite_setPosition(sprite, vaisseau_pos);
}

void handle_key_up(sfSprite* sprite)
{
    int l = 502;
    l = sfSprite_getPosition(sprite).y;
    l = l / 10 % 3;
    l = (l * 59) + 502;
    sfIntRect rectl = {l, 0, 59, 77};
    sfSprite_setTextureRect(sprite, rectl);
    sfVector2f vaisseau_pos = sfSprite_getPosition(sprite);
    vaisseau_pos.y -= 6;
    sfSprite_setPosition(sprite, vaisseau_pos);
}

void handle_key_down(sfSprite* sprite)
{
    int l = 502;
    l = sfSprite_getPosition(sprite).y;
    l = l / 10 % 3;
    l = (l * 59) + 502;
    sfIntRect rectl = {l, 0, 59, 77};
    sfSprite_setTextureRect(sprite, rectl);
    sfVector2f vaisseau_pos = sfSprite_getPosition(sprite);
    vaisseau_pos.y += 6;
    sfSprite_setPosition(sprite, vaisseau_pos);
}

void process_keys(rpg *r, sfSprite* sprite, killer *win)
{
    if (r->event.type == sfEvtKeyPressed) {
        if (r->event.key.code == sfKeyQ) {
            handle_key_left(sprite);
        }
        if (r->event.key.code == sfKeyD) {
            handle_key_right(sprite);
        }
        if (r->event.key.code == sfKeyZ) {
            handle_key_up(sprite);
        }
        if (r->event.key.code == sfKeyS) {
            handle_key_down(sprite);
        }
    }initialise_bound(win, r);
    initialise_bool(win, r);
    if (win->m1 || win->m2 || win->m3 || win->pm2 ||
    win->pm1 || win->jd1 || win->v1 || win->v2 || win->v3 || win->fn1 ||
    win->fn2 || win->fn3 || win->fn4 || win->cl1 ||
    win->p || win->w || win->ry) {
        for_collision(win, sprite, r); }
}
