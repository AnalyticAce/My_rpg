/*
** EPITECH PROJECT, 2022
** my_rpg.c
** File description:
** bsradar
*/

#include "../include/my_lib.h"


void menu(rpg *r)
{
    init_sty(r);int a = r->sty_y;
    while (sfRenderWindow_isOpen(r->window)){
        if (r->sty_y > (r->video.height - 110.0) * -1){
            r->sty_y -= 0.5;r->sty_pos.y = r->sty_y;
            a = r->sty_y;
            sfSprite_setPosition(r->sstroty, r->sty_pos);
        }if (a == ((r->video.height - 110.0) * -1) - 300){
            map_maker(r);
        }if (a > ((r->video.height - 110.0) * -1) - 300){
            a--;
        }
        while (sfRenderWindow_pollEvent(r->window, &r->event)){
            event_rpg(r);enter_event(r);
        }display_sty(r);
    }destroy_sty(r);
}

void *load(rpg * r)
{
    sfRectangleShape *load = sfRectangleShape_create();
    sfVector2f scal = {800, 50};
    sfVector2f pos = {500, 930};
    sfRectangleShape_setSize(load, scal);
    sfRectangleShape_setPosition(load, pos);
    sfRectangleShape_setOutlineThickness(load, 2.f);
    sfRectangleShape_setOutlineColor(load, sfBlack);
    sfRectangleShape_setFillColor(load, sfWhite);
    return load;
}

void *loading(rpg * r)
{
    sfRectangleShape *loading = sfRectangleShape_create();
    sfVector2f scal = {50, 50};
    sfVector2f pos = {500, 930};
    sfRectangleShape_setSize(loading, scal);
    sfRectangleShape_setPosition(loading, pos);
    sfRectangleShape_setOutlineThickness(loading, 2.f);
    sfRectangleShape_setOutlineColor(loading, sfBlack);
    sfRectangleShape_setFillColor(loading, sfRed);
    return loading;
}

void chargement(rpg *r)
{
    init_ld(r);int a = 0;
    while (sfRenderWindow_isOpen(r->window)){
        r->tmt = sfClock_getElapsedTime(r->tmclo);
        r->tm = r->tmt.microseconds / 10000.0;
        a = ld_steps(r, a);
        sfFloatRect porec = sfRectangleShape_getGlobalBounds(r->bar);
        sfVector2f poschar = {porec.left, porec.top - 48};
        sfText_setPosition(r->charg, poschar);
        while (sfRenderWindow_pollEvent(r->window, &r->event)){
            event_rpg(r);
        }
        display_ld(r);
    }
    destroy_ld(r);
}

int main(int ac, char **av)
{
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h'){
        return 0;
    }rpg *r = malloc(sizeof(rpg));
    hunt *s = malloc(sizeof(hunt));
    video(r);f_menu(r);
    sfRenderWindow_destroy(r->window);
    return (0);free(r);free(s);
}
