/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenates characters of the str in dest
*/

#include "../include/my_lib.h"

void initialize_window(Game1 *game)
{
    game->mode = (sfVideoMode){1920, 1080, 32};
    game->window = sfRenderWindow_create(game->mode, "My CSFML Window",
    sfResize | sfClose, NULL);
}

void initialize_sprites(Game1 *game)
{
    for (int i = 0; i < NUM_SPRITESS; i++) { char filename[256] = "images/sp";
        char num[10]; my_conversion(i + 1, num);
        my_strcat(filename, num); my_strcat(filename, ".png");
        game->textures[i] = sfTexture_createFromFile(filename, NULL);
        game->sprites[i] = sfSprite_create();
        sfSprite_setTexture(game->sprites[i], game->textures[i], sfTrue);
        game->sprite_positions[i] =
            (sfVector2f) {game->mode.width / 2.f, game->mode.height / 2.f};
        sfSprite_setOrigin(game->sprites[i], (sfVector2f)
        {sfTexture_getSize(game->textures[i]).x / 1.f,
        sfTexture_getSize(game->textures[i]).y / 1.f});
        sfSprite_setPosition(game->sprites[i], game->sprite_positions[i]);
        sfSprite_setScale(game->sprites[i], (sfVector2f){0.5f, 0.5f});
    }
    game->background_texture = sfTexture_createFromFile("images/map.png", NULL);
    game->background_sprite = sfSprite_create();
    sfSprite_setTexture(game->background_sprite,
    game->background_texture, sfTrue); game->current_sprite = 0;
    game->enter_pressed = 0;  game->restart_pressed = 0;
}

void initialize_game(Game1 *game)
{
    initialize_window(game);
    initialize_sprites(game);
}
