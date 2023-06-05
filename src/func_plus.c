/*
** EPITECH PROJECT, 2023
** func_plus
** File description:
** functions that couldn't find places
*/

#include "../include/my_lib.h"

void petit_setarbre6(killer *win)
{
    win->fn4t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->fn4s = sfSprite_create();
    sfSprite_setTexture(win->fn4s, win->fn4t, sfTrue);
    win->fn4pos.x = 900; win->fn4pos.y = 1070;
    win->fn4scal.x = 1.2; win->fn4scal.y = 1;
    sfSprite_setPosition(win->fn4s, win->fn4pos);
    sfSprite_setScale(win->fn4s, win->fn4scal);
    win->cl1t = sfTexture_createFromFile("sprite/v1.png", NULL);
    win->cl1s = sfSprite_create();
    sfSprite_setTexture(win->cl1s, win->cl1t, sfTrue);
    win->cl1pos.x = 10; win->cl1pos.y = 570;
    win->cl1scal.x = 1.35; win->cl1scal.y = 0.2;
    sfSprite_setPosition(win->cl1s, win->cl1pos);
    sfSprite_setScale(win->cl1s, win->cl1scal);
}

void setarbre1(killer *win)
{
    petit_setarbre1(win);
    petit_setarbre2(win);
    petit_setarbre3(win);
    petit_setarbre4(win);
    petit_setarbre5(win);
    petit_setarbre6(win);
    petit_setarbre7(win);
    setarbre8(win);
}

void initialise_bound(killer *win, rpg *r)
{
    win->bounds1 = sfSprite_getGlobalBounds(r->shero);
    win->bounds2 = sfSprite_getGlobalBounds(win->ar1sp);
    win->bounds22 = sfSprite_getGlobalBounds(win->ar2sp);
    win->bounds23 = sfSprite_getGlobalBounds(win->ar3sp);
    win->boundspm1 = sfSprite_getGlobalBounds(win->pm1s);
    win->boundspm2 = sfSprite_getGlobalBounds(win->pm2s);
    win->boundsjd1 = sfSprite_getGlobalBounds(win->jd1s);
    win->boundsv1 = sfSprite_getGlobalBounds(win->v1s);
    win->boundsv2 = sfSprite_getGlobalBounds(win->v2s);
    win->boundsv3 = sfSprite_getGlobalBounds(win->v3s);
    win->boundsfn1 = sfSprite_getGlobalBounds(win->fn1s);
    win->boundsfn2 = sfSprite_getGlobalBounds(win->fn2s);
    win->boundsfn3 = sfSprite_getGlobalBounds(win->fn3s);
    win->boundsfn4 = sfSprite_getGlobalBounds(win->fn4s);
    win->boundscl1 = sfSprite_getGlobalBounds(win->cl1s);
    win->boundsry = sfSprite_getGlobalBounds(win->rys);
    win->boundsw = sfSprite_getGlobalBounds(win->ws);
    win->boundsp = sfSprite_getGlobalBounds(win->pss);
}

void initialise_bool(killer *win, rpg *r)
{
    win->m1 = sfFloatRect_intersects(&win->bounds1, &win->bounds2, NULL);
    win->m2 = sfFloatRect_intersects(&win->bounds1, &win->bounds22, NULL);
    win->m3 = sfFloatRect_intersects(&win->bounds1, &win->bounds23, NULL);
    win->pm1 = sfFloatRect_intersects(&win->bounds1, &win->boundspm1, NULL);
    win->pm2 = sfFloatRect_intersects(&win->bounds1, &win->boundspm2, NULL);
    win->jd1 = sfFloatRect_intersects(&win->bounds1, &win->boundsjd1, NULL);
    win->v1 = sfFloatRect_intersects(&win->bounds1, &win->boundsv1, NULL);
    win->v2 = sfFloatRect_intersects(&win->bounds1, &win->boundsv2, NULL);
    win->v3 = sfFloatRect_intersects(&win->bounds1, &win->boundsv3, NULL);
    win->fn1 = sfFloatRect_intersects(&win->bounds1, &win->boundsfn1, NULL);
    win->fn2 = sfFloatRect_intersects(&win->bounds1, &win->boundsfn2, NULL);
    win->fn3 = sfFloatRect_intersects(&win->bounds1, &win->boundsfn3, NULL);
    win->fn4 = sfFloatRect_intersects(&win->bounds1, &win->boundsfn4, NULL);
    win->cl1 = sfFloatRect_intersects(&win->bounds1, &win->boundscl1, NULL);
    win->w = sfFloatRect_intersects(&win->bounds1, &win->boundsw, NULL);
    win->p = sfFloatRect_intersects(&win->bounds1, &win->boundsp, NULL);
    win->ry = sfFloatRect_intersects(&win->bounds1, &win->boundsry, NULL);
}

void for_collision(killer *win, sfSprite* sprite,  rpg *r)
{
    if (r->event.type == sfEvtKeyPressed) {
        if (r->event.key.code == sfKeyQ) {
            handle_key_right(sprite);
        }
        if (r->event.key.code == sfKeyD) {
            handle_key_left(sprite);
        }
        if (r->event.key.code == sfKeyZ) {
            handle_key_down(sprite);
        }
        if (r->event.key.code == sfKeyS) {
            handle_key_up(sprite);
        }
    }
}
