/*
** EPITECH PROJECT, 2023
** mini_game.c
** File description:
** mini game for rpg
*/

#include "../include/my_lib.h"

void my_time(hunt *s)
{
    s->x = 50;
    s->y = 41;
    s->seconds;
    s->clock = sfClock_create();
}

void function_main(hunt *s, rpg *r)
{
    r->hunt_vid.width = 1920;
    r->hunt_vid.height = 1080;
    r->hunt_vid.bitsPerPixel = 32;
    r->khunter = sfRenderWindow_create(r->hunt_vid,
        "MyHUNTER", sfDefaultStyle, NULL);
    s->boom = sfTexture_createFromFile("images/expr1.png", NULL);
    s->sboom = sfSprite_create();
    s->kcount = 0;
    s->miss = 0;s->missp = 0;s->score = 0;s->v = 0;
    my_time(s);
    element(s);
    scale(s, r);
    rect(s);
}

int play(rpg *r)
{
    hunt *s = malloc(sizeof(hunt));
    s->vit = 10;
    function_main(s, r);
    while (sfRenderWindow_isOpen(r->khunter)){
        sfRenderWindow_setMouseCursorVisible(r->khunter, false);
        fly(s);reset(s, r);
        while (sfRenderWindow_pollEvent(r->khunter, &r->evt_hunt)){
            manage_mouse_move(s, r);manage_mouse_kill(s, r);my_close(s, r);
        }display(s, r);
    }
}

void play_music(rpg *r)
{
    r->mdv_m = sfMusic_createFromFile("music.ogg");
    sfMusic_setLoop(r->mdv_m, sfTrue);
    sfMusic_play(r->mdv_m);
}
