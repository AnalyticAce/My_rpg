/*
** EPITECH PROJECT, 2023
** inventory.c
** File description:
** window for inventory
*/

#include "../include/my_lib.h"

void creat_invw(rpg *r)
{
    r->invt_video.width = 800;
    r->invt_video.height = 800;
    r->invt_video.bitsPerPixel = 32;
    r->inventory = sfRenderWindow_create(r->invt_video,
        "Inventory", sfDefaultStyle, NULL);
    r->inv_bk = sfTexture_createFromFile("images/INVENTAIRE.png", NULL);
    r->sinv_bk = sfSprite_create();
    sfSprite_setTexture(r->sinv_bk, r->inv_bk, sfTrue);
}

void weapon(rpg *r)
{
    r->arme1 = sfRectangleShape_create();sfVector2f scale = {200, 200};
    sfRectangleShape_setSize(r->arme1, scale);
    sfRectangleShape_setPosition(r->arme1, (sfVector2f){100, 200});
    sfTexture *t1 = sfTexture_createFromFile("images/arme2.png", NULL);
    sfRectangleShape_setTexture(r->arme1, t1, sfTrue);
    r->arme2 = sfRectangleShape_create();
    sfRectangleShape_setSize(r->arme2, scale);
    sfRectangleShape_setPosition(r->arme2, (sfVector2f){100, 500});
    sfTexture *t2 = sfTexture_createFromFile("images/arme3.png", NULL);
    sfRectangleShape_setTexture(r->arme2, t2, sfTrue);
    r->bcl1 = sfRectangleShape_create();
    sfRectangleShape_setSize(r->bcl1, scale);
    sfRectangleShape_setPosition(r->bcl1, (sfVector2f){500, 200});
    sfTexture *t3 = sfTexture_createFromFile("images/bouclier2.png", NULL);
    sfRectangleShape_setTexture(r->bcl1, t3, sfTrue);
    r->bcl2 = sfRectangleShape_create();
    sfRectangleShape_setSize(r->bcl2, scale);
    sfRectangleShape_setPosition(r->bcl2, (sfVector2f){500, 500});
    sfTexture *t4 = sfTexture_createFromFile("images/bouclier3.png", NULL);
    sfRectangleShape_setTexture(r->bcl2, t4, sfTrue);
}

void weap_evt1(rpg *r, heros *h)
{
    sfVector2i invt_pos = sfMouse_getPositionRenderWindow(r->inventory);
    sfFloatRect ar1_pos = sfRectangleShape_getGlobalBounds(r->arme1);
    sfFloatRect ar2_pos = sfRectangleShape_getGlobalBounds(r->arme2);
    if ((invt_pos.y >= ar2_pos.top && invt_pos.y
        <= ar2_pos.top + ar2_pos.height)
        && (invt_pos.x >= ar2_pos.left && invt_pos.x
        <= ar2_pos.left + ar2_pos.width)){
        h->atq = 15;
    }
    if ((invt_pos.y >= ar1_pos.top && invt_pos.y
        <= ar1_pos.top + ar1_pos.height)
        && (invt_pos.x >= ar1_pos.left && invt_pos.x
        <= ar1_pos.left + ar1_pos.width)){
        h->atq = 25;
    }
}

void weap_evt2(rpg *r, heros *h)
{
    sfVector2i invt_pos = sfMouse_getPositionRenderWindow(r->inventory);
    sfFloatRect ar1_pos = sfRectangleShape_getGlobalBounds(r->bcl1);
    sfFloatRect ar2_pos = sfRectangleShape_getGlobalBounds(r->bcl2);
    if ((invt_pos.y >= ar2_pos.top && invt_pos.y
        <= ar2_pos.top + ar2_pos.height)
        && (invt_pos.x >= ar2_pos.left && invt_pos.x
        <= ar2_pos.left + ar2_pos.width)){
        h->def = 100;
    }
    if ((invt_pos.y >= ar1_pos.top && invt_pos.y
        <= ar1_pos.top + ar1_pos.height)
        && (invt_pos.x >= ar1_pos.left && invt_pos.x
        <= ar1_pos.left + ar1_pos.width)){
        h->def = 150;
    }
}

void evt_main(rpg *r, heros *h)
{
    creat_invw(r);weapon(r);h->def = 0;
    while (sfRenderWindow_isOpen(r->inventory)){
        while (sfRenderWindow_pollEvent(r->inventory, &r->inv_evt)){
            evt_inv(r, h);
        }sfRenderWindow_drawSprite(r->inventory, r->sinv_bk, NULL);
        sfRenderWindow_drawRectangleShape(r->inventory, r->arme1, NULL);
        sfRenderWindow_drawRectangleShape(r->inventory, r->arme2, NULL);
        sfRenderWindow_drawRectangleShape(r->inventory, r->bcl1, NULL);
        sfRenderWindow_drawRectangleShape(r->inventory, r->bcl2, NULL);
        sfRenderWindow_display(r->inventory);
    }
    sfTexture_destroy(r->inv_bk);sfSprite_destroy(r->sinv_bk);
    sfRectangleShape_destroy(r->arme1);sfRectangleShape_destroy(r->arme2);
    sfRectangleShape_destroy(r->bcl2);sfRectangleShape_destroy(r->bcl1);
    sfRenderWindow_destroy(r->inventory);
}
