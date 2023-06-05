/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void draw_house2(killer *win, char **map, rpg *r)
{
    element_t house2 = {win->shouse2, win->thouse2, win->house2_pos};
    draw_element(win, 'O', &house2, r);
}

void draw_ban(killer *win, char **map, rpg *r)
{
    element_t bandit = {win->s_ban, win->t_ban, win->banpos};
    draw_element(win, 'B', &bandit, r);
}

void draw_map(killer *win, char **map, rpg *r)
{
    draw_grass(win, map, r); draw_road(win, map, r);
    draw_mur(win, map, r); draw_water(win, map, r);
    draw_pont(win, map, r); draw_tree(win, map, r);
    draw_house(win, map, r); draw_fleur(win, map, r);
    draw_pal(win, map, r); draw_palace(win, map, r);
    draw_grill(win, map, r); draw_trou(win, map, r);
    draw_puit(win, map, r); draw_lotus(win, map, r);
    draw_buson(win, map, r); draw_evil(win, map, r);
    draw_toubiyon(win, map, r); draw_fleur1(win, map, r);
    draw_fleur2(win, map, r); draw_house2(win, map, r);
    draw_ban(win, map, r);
}

static sfRenderWindow *create_window(unsigned int x, unsigned int y,
unsigned int bpp, char *title)
{
    sfVideoMode video_mode = {x, y, bpp};
    return (sfRenderWindow_create(video_mode, title,
    sfClose | sfResize, NULL));
}

void window_sprite(killer *win, rpg *r)
{
    win->map_size.x = 1920; win->map_size.y = 1080;
    set_view(win, r);
    sprite_with_scale(win);
    sprite_without_scale(win);
}
