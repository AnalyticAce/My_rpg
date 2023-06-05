/*
** EPITECH PROJECT, 2023
** RPG
** File description:
** COmbat
*/

#include "../include/my_lib.h"

void display_image(sfRenderWindow *window,
const char *image_file, float x, float y)
{
    sfTexture *texture = sfTexture_createFromFile(image_file, NULL);
    sfSprite *sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f){x, y});
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
}

void draw_text(sfRenderWindow* window, char *text, int x, int y)
{
    sfFont* font = sfFont_createFromFile("arial.ttf");
    sfText* sfmlText = sfText_create();
    sfText_setString(sfmlText, text);
    sfText_setFont(sfmlText, font);
    sfText_setCharacterSize(sfmlText, 25);
    sfText_setColor(sfmlText, sfBlack);
    sfText_setPosition(sfmlText, (sfVector2f){x, y});
    sfRenderWindow_drawText(window, sfmlText, NULL);
    sfText_destroy(sfmlText);
    sfFont_destroy(font);
}

void display_image_2(sfRenderWindow *window,
const char *image_file, sfEvent event, rpg *r)
{
    sfVector2i fight = sfMouse_getPositionRenderWindow(window);
    static sfIntRect rect = {0, 0, 65, 132};
    static sfClock *clock = NULL;
    if (!clock) clock = sfClock_create();
    sfBool animate = sfFalse;
    sfTime time = sfClock_getElapsedTime(clock);
    float second = time.microseconds / 1000000.0;
    if ((event.type == sfEvtMouseButtonPressed && fight.y >= 845 &&
    fight.y <= 892 && fight.x >= 225 && fight.x <= 524)) animate = sfTrue;
    if (animate && (second > 0.4)) {
        move_function(&rect, 65, 16, event);sfClock_restart(clock);
        r->fr_v -= 15;
    }sfTexture *texture = sfTexture_createFromFile(image_file, NULL);
    sfSprite *sprite = sfSprite_create(); sfVector2f scale = {4, 4};
    sfSprite_setScale(sprite, scale);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, (sfVector2f){268, 200});
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfSprite_destroy(sprite); sfTexture_destroy(texture);
}

void final_main(rpg *r)
{
    r->final_v.width = 1920; r->final_v.height = 1080;
    r->final_v.bitsPerPixel = 32;
    r->final_w = sfRenderWindow_create(r->final_v, "Final_Combat",
        sfDefaultStyle, NULL);life_h(r);
    while (sfRenderWindow_isOpen(r->final_w)) {
        while (sfRenderWindow_pollEvent(r->final_w, &r->evt_final)){
            (r->evt_final.type == sfEvtClosed) ?
            sfRenderWindow_close(r->final_w) : 0;
        }sfRenderWindow_clear(r->final_w, sfBlack);
        display_image(r->final_w, "images/scène_combat.png", 0, 0);
        dis_combat(r);display_image_2(r->final_w, "images/solder_combat.png",
        r->evt_final, r);draw_text(r->final_w, "Combattre", 300, 855);
        draw_text(r->final_w, "Defendre", 300, 945);
        display_image_king(r->final_w, "images/king_combat.png",
        r->evt_final, r);sfRenderWindow_display(r->final_w);
    }sfRectangleShape_destroy(r->fh_life);sfRectangleShape_destroy(r->fr_life);
    sfRenderWindow_destroy(r->final_w);
}
