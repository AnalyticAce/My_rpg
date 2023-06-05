/*
** EPITECH PROJECT, 2023
** combat2.c
** File description:
** part 2 of combat.c
*/

#include "../include/my_lib.h"

void dessinercarre(sfRenderWindow *fenetre, int x, int y)
{
    sfRectangleShape *carre = sfRectangleShape_create();
    sfRectangleShape_setPosition(carre, (sfVector2f){x, y});
    sfRectangleShape_setSize(carre, (sfVector2f){300, 50});
    sfRectangleShape_setFillColor(carre, sfWhite);
    sfRenderWindow_drawRectangleShape(fenetre, carre, NULL);
    sfRectangleShape_destroy(carre);
}

void dessiner_grandcarre(sfRenderWindow *fenetre, int x, int y)
{
    sfColor color = sfColor_fromRGBA(128, 220, 100, 128);
    sfRectangleShape *carre = sfRectangleShape_create();
    sfRectangleShape_setPosition(carre, (sfVector2f){x, y});
    sfRectangleShape_setSize(carre, (sfVector2f){600, 600});
    sfRectangleShape_setFillColor(carre, color);
    sfRenderWindow_drawRectangleShape(fenetre, carre, NULL);
    sfRectangleShape_destroy(carre);
}

void dis_combat(rpg *r)
{
    dessinercarre(r->final_w, 225, 845);
    dessinercarre(r->final_w, 225, 936);
    dessiner_grandcarre(r->final_w, 145, 155);
    dessiner_grandcarre(r->final_w, 1180, 155);
    dessinercarre_vie(r->final_w, 146, 107);
    dessinercarre_vie(r->final_w, 1180, 107);
    sfRectangleShape_setSize(r->fh_life, (sfVector2f) {r->fh_v, 25});
    sfRectangleShape_setSize(r->fr_life, (sfVector2f) {r->fr_v, 25});
    if (r->fh_v >= 0)
        sfRenderWindow_drawRectangleShape(r->final_w, r->fh_life, NULL);
    if (r->fr_v >= 0)
        sfRenderWindow_drawRectangleShape(r->final_w, r->fr_life, NULL);
    if (r->fh_v == 0 || r->fr_v == 0) sfRenderWindow_close(r->final_w);

}

void move_function(sfIntRect *rect, int offset, int max_value, sfEvent event)
{
    if (rect->left + offset >= max_value * offset) {
        rect->left = 0;
    } else {
        rect->left += offset;
    }
}
