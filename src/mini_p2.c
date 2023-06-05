/*
** EPITECH PROJECT, 2023
** mini_p2.c
** File description:
** part two of mini_game
*/

#include "../include/my_lib.h"

void reset(hunt *s, rpg *r)
{
    if (s->x > r->hunt_vid.width){
        s->x = 10;
        s->y += 150;
        s->missp++;
    }
    if (s->y > 500){
        s->y = 41;
    }
    if (s->missp > 20){
        sfRenderWindow_close(r->khunter);
        my_putstr("END OF THE SESSION\n");
        my_putstr("YOUR KILL:");my_put_nbr(s->score);
        my_putchar('\n');
        my_putstr("YOUR MISS YOUR TARGET:");
        my_put_nbr(s->miss);my_putchar('\n');
        my_putstr("BIRDS YOU MISS:");
        my_put_nbr(s->missp);
        my_putchar('\n');
    }
}

void fly(hunt *s)
{
    s->scd = 5.0;
    s->time = sfClock_getElapsedTime(s->clock);
    s->seconds = s->time.microseconds / 10000.0;
    if (s->seconds > s->scd) {
        move_rect(&s->rect, 110, 330);
        sfSprite_setTexture(s->sprite1, s->target, sfTrue);
        sfClock_restart(s->clock);
        s->oispos.x = s->x += s->vit;
        s->oispos.y = s->y;
        sfSprite_setPosition(s->sprite1, s->oispos);
    }
}

void rect(hunt *s)
{
    s->rect.top = 0;
    s->rect.left = 0;
    s->rect.width = 110;
    s->rect.height = 110;
}

void scale(hunt *s, rpg *r)
{
    s->volpo = sfSprite_getPosition(s->sprite1);
    s->scale.x = 0.8; s->scale.y = 0.8;
    s->scale1.x = 0.3; s->scale1.y = 0.3;
    s->scale2.x = 0.3; s->scale2.y = 0.3;
    s->pos2.x = 10; s->pos2.y = 500;
    s->gscale.x = 0.5; s->gscale.y = 0.5;
    s->guninitp.x = 10; s->guninitp.y = (r->hunt_vid.height - 150);
    s->mouscale.x = 0.7; s->mouscale.y = 0.7;
    s->moulpos.x = 900; s->moulpos.y = 200;
    s->scbom.x = 0.4; s->scbom.y = 0.4;
    sfSprite_setScale(s->sprite1, s->scale);
    sfSprite_setScale(s->sprite2, s->scale1);
    sfSprite_setScale(s->sgun, s->gscale);
    sfSprite_setPosition(s->sgun, s->guninitp);
    sfSprite_setScale(s->sboom, s->scbom);
}

void element(hunt *s)
{
    sfVector2f scback = {2, 1.5};
    s->back = sfTexture_createFromFile("images/mypays.png", NULL);
    s->target = sfTexture_createFromFile("images/cute.png", NULL);
    s->aim = sfTexture_createFromFile("images/crosshair1.png", NULL);
    s->gun = sfTexture_createFromFile("images/arrowr.png", NULL);
    s->sprite = sfSprite_create();
    s->sprite1 = sfSprite_create();
    s->sprite2 = sfSprite_create();
    s->sgun = sfSprite_create();
    s->textscore = sfText_create();
    sfText_setFont(s->textscore, s->font);
    sfText_setCharacterSize(s->textscore, 50);
}
