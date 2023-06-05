/*
** EPITECH PROJECT, 2023
** move.c
** File description:
** main file for hero deplacement
*/

#include "../include/my_lib.h"

void process_events(rpg *r, sfSprite* sprite, heros *h, killer *win)
{
    process_keys(r, sprite, win);
    if (r->event.type == sfEvtKeyPressed){
        if (r->event.key.code == sfKeyB){
            h->exp += 25;
        }
    }if (r->event.type == sfEvtKeyPressed){
        if (r->event.key.code == sfKeyI) evt_main(r, h);
        if (r->event.key.code == sfKeyH) conv2(r);
        if (r->event.key.code == sfKeyF) final_main(r);
        if (r->event.key.code == sfKeyG) conv1();
    }
}

void render(rpg *r, sfSprite* sprite, heros *h)
{
    sfRenderWindow_drawRectangleShape(r->window, h->d_life, NULL);
    sfRenderWindow_drawRectangleShape(r->window, h->d_arm, NULL);
    sfRenderWindow_drawRectangleShape(r->window, h->d_exp, NULL);
    sfRenderWindow_drawRectangleShape(r->window, h->life, NULL);
    sfRenderWindow_drawRectangleShape(r->window, h->armor, NULL);
    sfRenderWindow_drawRectangleShape(r->window, h->expr, NULL);
    sfRenderWindow_drawSprite(r->window, r->shero, NULL);
}

void walk_init(rpg *r, heros *h)
{
    llife(h);lexp(h);larm(h);h->def = 0;
    h->d_life = dark_r(h, (sfVector2f){500, 20},
    (sfVector2f){5, 5}, r);
    h->d_arm = dark_r(h, (sfVector2f){300, 20},
    (sfVector2f){5, 25}, r);
    h->d_exp = dark_r(h, (sfVector2f){300, 10},
    (sfVector2f){5, 50}, r);
    sfIntRect rect = {502, 0, 60, 77};
    r->hero = sfTexture_createFromFile("images/bigsolider1.png", NULL);
    r->shero = sfSprite_create();
    sfVector2f vaisseau_pos = {21, 100};
    sfSprite_setTexture(r->shero, r->hero, sfTrue);
    sfSprite_setPosition(r->shero, (sfVector2f){470, 450});
    sfSprite_setTextureRect(r->shero, rect);h->arm = h->arm + h->def;
}

void update(heros *h, rpg *r)
{
    if (h->exp >= 300){
        h->vie += 20;h->arm += 10;
        h->exp = 0;
    }
    sfVector2f scalx = {h->exp, 10};
    sfRectangleShape_setSize(h->expr, scalx);
    sfVector2f scalr = {h->arm, 20};
    sfRectangleShape_setSize(h->armor, scalr);
    sfVector2f scal = {h->vie, 20};
    sfRectangleShape_setSize(h->life, scal);
}
