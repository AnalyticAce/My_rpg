/*
** EPITECH PROJECT, 2022
** manage mouse click
** File description:
** manage mouse click
*/

#include "../include/my_lib.h"

void draw_element(killer *win, char element,
element_t *element_info, rpg *r)
{
    int i, j;
    for (i = 0, element_info->pos.y = 0; r->map[i] != NULL; i++) {
        for (j = 0, element_info->pos.x = 0; r->map[i][j] != '\0'; j++) {
            (r->map[i][j] == element) ? (
                sfSprite_setPosition(element_info->sprite,
                element_info->pos),
                sfSprite_setTexture(element_info->sprite,
                element_info->texture, sfTrue),
                sfRenderWindow_drawSprite(r->window,
                element_info->sprite, NULL)
            ) : 0;
            element_info->pos.x = element_info->pos.x + 20;
        }
        element_info->pos.y = element_info->pos.y + 20;
        element_info->pos.x = 0;
    }
}

void draw_grass(killer *win, char **map, rpg *r)
{
    element_t grass = {win->pg, win->gp, win->grass_pos};
    draw_element(win, ' ', &grass, r);
    draw_element(win, '*', &grass, r);
    draw_element(win, '8', &grass, r);
    draw_element(win, 'V', &grass, r);
}

void draw_road(killer *win, char **map, rpg *r)
{
    element_t road = {win->cp, win->ct, win->c_pos};
    draw_element(win, 'C', &road, r);
}

void draw_grill(killer *win, char **map, rpg *r)
{
    element_t grill = {win->sgrill, win->tgrill, win->grill_pos};
    draw_element(win, 'K', &grill, r);
}

void draw_fleur(killer *win, char **map, rpg *r)
{
    element_t fleur = {win->sf, win->tf, win->f_pos};
    draw_element(win, 'X', &fleur, r);
}
