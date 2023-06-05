/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void handle_key_escape(killer *win, rpg *r)
{
    if (r->event.key.code == sfKeyEscape) {
        sfRenderWindow_close(r->window);
    }
}

void handle_key_horizontal(killer *win, rpg *r)
{
    if (r->event.key.code == sfKeyRight) {
        win->view = (sfView *)sfRenderWindow_getView(r->window);
        sfVector2f center = sfView_getCenter(win->view);
        if (center.x + (1920 / 2) < 2421) {
            center.x += 10;
        }
        sfView_setCenter(win->view, center);
        sfRenderWindow_setView(r->window, win->view);
    } if (r->event.key.code == sfKeyLeft) {
        win->view = (sfView *)sfRenderWindow_getView(r->window);
        sfVector2f center = sfView_getCenter(win->view);
        if (center.x - (1920 / 2) > 0) {
            center.x -= 10;
        }
        sfView_setCenter(win->view, center);
        sfRenderWindow_setView(r->window, win->view);
    }
}

void handle_key_vertical(killer *win, rpg *r)
{
    if (r->event.key.code == sfKeyDown) {
        win->view = (sfView *)sfRenderWindow_getView(r->window);
        sfVector2f center = sfView_getCenter(win->view);
        if (center.y + (1080 / 2) < 1581) {
            center.y += 10;
        }
        sfView_setCenter(win->view, center);
        sfRenderWindow_setView(r->window, win->view);
    } if (r->event.key.code == sfKeyUp) {
        win->view = (sfView *)sfRenderWindow_getView(r->window);
        sfVector2f center = sfView_getCenter(win->view);
        if (center.y - (1080 / 2) > 0) {
            center.y -= 10;
        }
        sfView_setCenter(win->view, center);
        sfRenderWindow_setView(r->window, win->view);
    }
}

void handle_key_zoomer(killer *win, rpg *r)
{
    if (r->event.key.code == sfKeyO) {
        win->view = (sfView *)sfRenderWindow_getView(r->window);
        sfView_zoom(win->view, 0.9f);
        sfRenderWindow_setView(r->window, win->view);
    } if (r->event.key.code == sfKeyP) {
        win->view = (sfView *)sfRenderWindow_getView(r->window);
        sfView_zoom(win->view, 1.1f);
        sfRenderWindow_setView(r->window, win->view);
    }
}
