/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** init_game_struct.c
*/

#include "csfml.h"

game_t *init_game_struct(char *window_name, int width, int height, int fps)
{
    game_t *game = malloc(sizeof(game_t));

    game->dt = 0;
    game->window = cs_window_create(window_name, width, height, fps);
    game->clock = sfClock_create();
    return game;
}
