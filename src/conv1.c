/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenates characters of the str in dest
*/

#include "../include/my_lib.h"

void cond1(Game *game, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(game->window);
    } else if (event.type == sfEvtKeyPressed) {
        game->enter_pressed =
        (event.key.code == sfKeyReturn) ? 1 : game->enter_pressed;
        game->restart_pressed =
        (event.key.code == sfKeyR) ? 1 : game->restart_pressed;
    }
}

void envt_loop1(Game* game)
{
    while (sfRenderWindow_isOpen(game->window)) {
        sfEvent event;
        while (sfRenderWindow_pollEvent(game->window, &event)) {
            cond1(game, event);
            update_display1(game);
            sfRenderWindow_drawSprite(game->window,
            game->background_sprite, NULL);
            sfRenderWindow_drawSprite(game->window,
            game->sprites[game->current_sprite], NULL);
            sfRenderWindow_display(game->window);
        }
    }
}

void clen_conv1(Game* game)
{
    for (int i = 0; i < game->num_sprites; i++) {
        sfSprite_destroy(game->sprites[i]);
        sfTexture_destroy(game->textures[i]);
    }
    sfSprite_destroy(game->background_sprite);
    sfTexture_destroy(game->background_texture);
    sfRenderWindow_destroy(game->window);
}

void conv1(void)
{
    Game game;
    init_game1(&game);
    envt_loop1(&game);
    clen_conv1(&game);
}
