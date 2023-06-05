/*
** EPITECH PROJECT, 2023
** mini_p1.c
** File description:
** mini_part of mini_game
*/

#include "../include/my_lib.h"

void move_rect(sfIntRect *rect, int offest, int max_value)
{
    if (rect->left == max_value - offest){
        rect->left = 0;
    }else{
        rect->left = rect->left + offest;
    }
}

void display(hunt *s, rpg *r)
{
    sfSprite_setTexture(s->sprite, s->back, sfTrue);
    sfSprite_setScale(s->sprite, (sfVector2f){1.5, 1.5});
    sfSprite_setTexture(s->sprite1, s->target, sfTrue);
    sfSprite_setTexture(s->sprite2, s->aim, sfTrue);
    sfSprite_setTexture(s->sgun, s->gun, sfTrue);
    sfSprite_setTextureRect(s->sprite1, s->rect);
    sfRenderWindow_drawSprite(r->khunter, s->sprite, NULL);
    sfRenderWindow_drawSprite(r->khunter, s->sprite1, NULL);
    sfRenderWindow_drawSprite(r->khunter, s->sprite2, NULL);
    if ( s->v == 1){
        sfSprite_setTexture(s->sboom, s->boom, sfTrue);
        sfRenderWindow_drawSprite(r->khunter, s->sboom, NULL);
    }sfRenderWindow_drawSprite(r->khunter, s->sgun, NULL);
    sfRenderWindow_display(r->khunter);
}

void my_close(hunt *s, rpg *r)
{
    if (r->evt_hunt.type == sfEvtClosed || s->score == 20){
        sfRenderWindow_close(r->khunter);
        my_putstr("END OF THE SESSION\n");
        my_putstr("YOUR KILL:");
        my_put_nbr(s->score);
        my_putchar('\n');
        my_putstr("YOUR MISS YOUR TARGET:");
        my_put_nbr(s->miss);
        my_putchar('\n');
        my_putstr("BIRDS YOU MISS:");
        my_put_nbr(s->missp);
        my_putchar('\n');
    }
}

int manage_mouse_kill(hunt *s, rpg *r)
{
    s->v = 0;
    if (r->evt_hunt.type == sfEvtMouseButtonPressed){
        s->aaa = sfSprite_getPosition(s->sprite1);
        if (s->mousepos.x >= s->aaa.x && s->mousepos.x <= s->aaa.x + 110
            && s->mousepos.y >= s->aaa.y && s->mousepos.y <= s->aaa.y + 110){
            s->x = 10; s->y = rand() % 350;
            s->v = 1; s->vit += 5;
            sfVector2f kill = {s->x, s->y};
            sfSprite_setPosition(s->sprite1, kill);
            sfVector2f kil;s->score++;
            kil.x = s->oispos.x - 50; kil.y = s->oispos.y - 50;
            sfSprite_setPosition(s->sboom, kil);
        }else{s->miss++;}
    }
    return s->v;
}

void manage_mouse_move(hunt *s, rpg *r)
{
    if (r->evt_hunt.type == sfEvtMouseMoved){
        s->mousepos = sfMouse_getPositionRenderWindow(r->khunter);
        sfVector2f aimpos = sfSprite_getPosition(s->sprite2);
        sfVector2f posix = {s->mousepos.x - 33, s->mousepos.y - 33};
        sfSprite_setPosition(s->sprite2, posix);
    }
    if (r->evt_hunt.type == sfEvtMouseMoved){
        sfVector2f gunpos = sfSprite_getPosition(s->sgun);
        sfVector2f posgun = {s->mousepos.x - 135 , s->guninitp.y};
        sfSprite_setPosition(s->sgun, posgun);
    }
}
