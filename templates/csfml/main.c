/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** main.c
*/

#include "bin_name.h"

int main(void)
{
    game_t *game = init_game_struct("Window Name", 1280, 720, 120);

    while (sfRenderWindow_isOpen(game->window)) {
        game->dt = cs_clock_get_dt(game->clock);
    }
    return 0;
}
