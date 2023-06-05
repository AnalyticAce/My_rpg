/*
** EPITECH PROJECT, 2023
** loading.c
** File description:
** loading's functions
*/

#include "../include/my_lib.h"
void init_ld(rpg *r)
{
    r->tmclo = sfClock_create();
    r->charg = sfText_create();
    r->fcharg = sfFont_createFromFile("LLPIXEL3.ttf");
    r->charg = sfText_create();
    sfText_setString(r->charg, "CHARGEMENT...");
    sfText_setFont(r->charg, r->fcharg);
    sfText_setColor(r->charg, sfBlack);
    sfText_setCharacterSize(r->charg, 50);
    r->pourc = 50;
    r->barv = load(r);
    r->bar = loading(r);
    r->spl = sfTexture_createFromFile("images/mbkcj.jpg", NULL);
    r->sspl = sfSprite_create();
    r->splsca.x = 1; r->splsca.y = 1;
    sfSprite_setScale(r->sspl, r->splsca);
}

void display_ld(rpg *r)
{
    sfRenderWindow_clear(r->window, sfBlack);
    sfSprite_setTexture(r->sspl, r->spl, sfTrue);
    sfRenderWindow_drawSprite(r->window, r->sspl, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->barv, NULL);
    sfRenderWindow_drawRectangleShape(r->window, r->bar, NULL);
    sfRenderWindow_drawText(r->window, r->charg, NULL);
    sfRenderWindow_display(r->window);
}

void destroy_ld(rpg *r)
{
    sfTexture_destroy(r->spl);
    sfSprite_destroy(r->sspl);
    sfText_destroy(r->charg);
    sfRectangleShape_destroy(r->bar);
    sfRectangleShape_destroy(r->barv);
}

int ld_steps(rpg *r, int a)
{
    sfVector2f news = {a, 50};
    if (a < 800){
        a += rand() % 3;
    }else{
        sfRenderWindow_clear(r->window, sfBlack);
        menu(r);
    }
    if (a == 400)
        sfRectangleShape_setFillColor(r->bar, sfYellow);
    if (a == 600)
        sfRectangleShape_setFillColor(r->bar, sfGreen);
    sfRectangleShape_setSize(r->bar, news);
    return a;
}

void enter_event(rpg *r)
{
    if (r->event.key.code == sfKeyEnter){
        r->sty_y -= 5;
    }
}
