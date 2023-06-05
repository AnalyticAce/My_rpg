/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenates characters of the str in dest
*/

#include "../include/my_lib.h"

void process_input(Game1 *game)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(game->window, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(game->window);
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyReturn)
            game->enter_pressed = 1;
        if (event.type == sfEvtKeyPressed && event.key.code == sfKeyR)
            game->restart_pressed = 1;
    }
}

void update_display(Game1 *game, rpg *r)
{
    if (game->enter_pressed) {
        if (game->current_sprite == NUM_SPRITESS - 1) {
            play(r);sfRenderWindow_close(game->window);
        } else {
            game->current_sprite = (game->current_sprite + 1) % NUM_SPRITESS;
        }
        game->enter_pressed = 0;
    } if (game->enter_pressed) {
        game->current_sprite = (game->current_sprite + 1) % NUM_SPRITESS;
        game->enter_pressed = 0;
    } if (game->restart_pressed) {
        game->current_sprite = 0; game->restart_pressed = 0;
    }
    for (int i = 0; i < NUM_SPRITESS; i++) {
        if (i == game->current_sprite)
            sfSprite_setPosition(game->sprites[i], (sfVector2f)
            {game->mode.width / 2.f, game->mode.height / 2.f});
        else
            sfSprite_setPosition(game->sprites[i], game->sprite_positions[i]);
    }
}

void initialize_window_and_controls(Game1 *game)
{
    initialize_window(game);
    game->current_sprite = 0;
    game->num_sprites = NUM_SPRITESS;
    game->enter_pressed = 0;
    game->restart_pressed = 0;
}

void initialize_sprites_and_background(Game1 *game)
{
    for (int i = 0; i < NUM_SPRITESS; i++) {
        char filename[256] = "images/sp";
        char num[10];my_conversion(i + 1, num);
        my_strcat(filename, num);my_strcat(filename, ".png");
        game->textures[i] = sfTexture_createFromFile(filename, NULL);
        game->sprites[i] = sfSprite_create();
        sfSprite_setTexture(game->sprites[i], game->textures[i], sfTrue);
        game->sprite_positions[i] =
        (sfVector2f){game->mode.width / 2.f, game->mode.height / 2.f};
        sfSprite_setOrigin(game->sprites[i], (sfVector2f)
        {sfTexture_getSize(game->textures[i]).x / 1.f,
        sfTexture_getSize(game->textures[i]).y / 1.f});
        sfSprite_setPosition(game->sprites[i], game->sprite_positions[i]);
        sfSprite_setScale(game->sprites[i], (sfVector2f){0.5f, 0.5f});
    }
    game->background_texture = sfTexture_createFromFile\
    ("images/map.png", NULL);
    game->background_sprite = sfSprite_create();
    sfSprite_setTexture(game->background_sprite,
    game->background_texture, sfTrue);
}

void init_game(Game1 *game)
{
    initialize_window_and_controls(game);
    initialize_sprites_and_background(game);
}
