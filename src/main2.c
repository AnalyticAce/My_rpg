/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void set_view(killer *win, rpg *r)
{
    sfView *view = sfView_create();
    sfView_setSize(view, win->map_size);
    sfView_setCenter(view, (sfVector2f)
    {win->map_size.x / 2, win->map_size.y / 2});
    sfRenderWindow_setView(r->window, view);
    sfView_destroy(view);
}

void close_window(killer *win, rpg *r, heros *h)
{
    int i = 0;
    while (sfRenderWindow_pollEvent(r->window, &r->event)) {
        r->shero_pos = sfSprite_getPosition(r->shero);
        switch (r->event.type) {
        case sfEvtClosed : sfRenderWindow_close(r->window); break;
        }if (r->event.type == sfEvtKeyPressed) {
            handle_key_vertical(win ,r);
            handle_key_horizontal(win, r);
            handle_key_zoomer(win, r);
            handle_key_escape(win, r);
        }process_events(r, r->shero, h, win);help_evt(r);
        if (r->shero_pos.x == 470 && r->shero_pos.y == 450 &&
            r->cpt_conv == 0){
            conv1();r->cpt_conv = 1;
        }if (r->shero_pos.x == 1910 && (r->shero_pos.y >= 942 &&
            r->shero_pos.y <= 990) && r->cpt_conv == 1){
            conv2(r);r->cpt_conv = 2;
        }
    }
}

void map_maker(rpg *r)
{
    killer *win = malloc(sizeof(killer));
    window_sprite(win, r);char *str = openfile("map.txt");
    setarbre1(win);r->cpt_conv == 0;
    int len = nb_slash(str); r->map = parsing_string(str,len);
    heros *h = malloc(sizeof(heros));walk_init(r, h);help_rec(r);
    while (sfRenderWindow_isOpen(r->window)) {
        sfRenderWindow_display(r->window);
        close_window(win, r, h);update(h, r);
        sfRenderWindow_clear(r->window,sfBlack);
        draw_map(win,r->map, r);render(r, r->shero, h);
        if (r->h_v == 1)
            sfRenderWindow_drawRectangleShape(r->window, r->help_rect, NULL);
        sfRenderWindow_drawRectangleShape(r->window, r->icon_rec, NULL);
    }free_tab(r->map);destroyer(win);
    sfRectangleShape_destroy(h->life);sfRectangleShape_destroy(h->d_life);
    sfRectangleShape_destroy(h->d_arm);sfRectangleShape_destroy(h->d_exp);
}
