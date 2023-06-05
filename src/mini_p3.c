/*
** EPITECH PROJECT, 2023
** mini_p3.c
** File description:
** third part of mini_game
*/

#include "../include/my_lib.h"

void destroy_hunt(rpg *r, hunt *s)
{
    sfTexture_destroy(s->aim);sfTexture_destroy(s->back);
    sfTexture_destroy(s->boom);sfTexture_destroy(s->dog);
    sfTexture_destroy(s->gun);sfTexture_destroy(s->target);
    sfTexture_destroy(s->m_back);sfTexture_destroy(s->moulin);
    sfTexture_destroy(s->mplay);sfTexture_destroy(s->mquit);
    sfSprite_destroy(s->m_sback);sfSprite_destroy(s->msplay);
    sfSprite_destroy(s->sboom);
    sfSprite_destroy(s->sprite);sfSprite_destroy(s->sprite1);
    sfSprite_destroy(s->sprite2);sfSprite_destroy(s->sprite4);
    sfSprite_destroy(s->sgun);sfSprite_destroy(s->smoulin);
}

void evt_inv(rpg *r, heros *h)
{
    if (r->inv_evt.type == sfEvtClosed){
        sfRenderWindow_close(r->inventory);
    }if (r->inv_evt.type == sfEvtMouseButtonPressed){
        weap_evt1(r, h);weap_evt2(r, h);
    }
}

void display_image_king(sfRenderWindow *window,
const char *image_file, sfEvent event, rpg *r)
{
    static sfIntRect rect = {0, 0, 82.5, 87};
    static sfClock *clock = NULL;
    if (!clock) clock = sfClock_create();
    sfTime time = sfClock_getElapsedTime(clock);
    float second = time.microseconds / 1000000.0;
    sfVector2i fight = sfMouse_getPositionRenderWindow(window);
    if (second > 0.4) { if (fight.y >= 845 && fight.y <= 892
        && fight.x >= 225 && fight.x <= 524) {
        move_function(&rect, 82.5, 5, event); r->fh_v -= 25;
        } sfClock_restart(clock);
    } sfTexture *texture = sfTexture_createFromFile(image_file, NULL);
    sfSprite *sprite = sfSprite_create(); sfVector2f scale = {4.5, 4.5};
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, (sfVector2f){1302, 250});
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_destroy(sprite); sfTexture_destroy(texture);
}

void dessinercarre_vie(sfRenderWindow *fenetre, int x, int y)
{
    sfRectangleShape *carre = sfRectangleShape_create();
    sfRectangleShape_setPosition(carre, (sfVector2f){x, y});
    sfRectangleShape_setSize(carre, (sfVector2f){600, 25});
    sfRectangleShape_setFillColor(carre, sfWhite);
    sfRenderWindow_drawRectangleShape(fenetre, carre, NULL);
    sfRectangleShape_destroy(carre);
}

void life_h(rpg *r)
{
    r->fh_v = 600;r->fr_v = 600;
    r->fh_life = sfRectangleShape_create();
    sfRectangleShape_setSize(r->fh_life, (sfVector2f) {r->fh_v, 25});
    sfRectangleShape_setFillColor(r->fh_life, sfRed);
    sfRectangleShape_setPosition(r->fh_life, (sfVector2f) {146, 107});
    r->fr_life = sfRectangleShape_create();
    sfRectangleShape_setSize(r->fr_life, (sfVector2f) {r->fr_v, 25});
    sfRectangleShape_setFillColor(r->fr_life, sfRed);
    sfRectangleShape_setPosition(r->fr_life, (sfVector2f) {1180, 107});
}
