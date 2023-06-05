/*
** EPITECH PROJECT, 2023
** story.c
** File description:
** story's function
*/

#include "../include/my_lib.h"

void init_sty(rpg *r)
{
    r->story = sfTexture_createFromFile("images/story.png", NULL);
    r->strbk = sfTexture_createFromFile("images/story_bck.jpeg", NULL);
    r->sstroty = sfSprite_create();
    r->sstrbk = sfSprite_create();
    r->sty_y = r->video.height;
    r->sty_pos.x = (r->video.width / 3) - 20;
    r->sty_pos.y = r->video.height;
    r->sty_scale.x = 2;
    r->sty_scale.y = 1.6;
    sfSprite_setPosition(r->sstroty, r->sty_pos);
    sfSprite_setTexture(r->sstroty, r->story, sfTrue);
    sfSprite_setTexture(r->sstrbk, r->strbk, sfTrue);
    sfSprite_setScale(r->sstrbk, r->sty_scale);
}

void display_sty(rpg *r)
{
    sfRenderWindow_clear(r->window, sfBlack);
    sfRenderWindow_drawSprite(r->window, r->sstrbk, NULL);
    sfRenderWindow_drawSprite(r->window, r->sstroty, NULL);
    sfRenderWindow_display(r->window);
}

void destroy_sty(rpg *r)
{
    sfTexture_destroy(r->story);
    sfTexture_destroy(r->strbk);
    sfSprite_destroy(r->sstrbk);
    sfSprite_destroy(r->sstroty);
}
