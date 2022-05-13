/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** csfml.h
*/

#ifndef CSFML
    #define CSFML

    #include "struct.h"

float cs_clock_get_dt(sfClock *clock);
sfSprite *cs_sprite_create(char *path_to_file);
void cs_sprite_draw(sfRenderWindow *window, sfSprite *sprite, sfVector2f pos);
sfRenderWindow *cs_window_create(char *name, int width, int height, int fps);

game_t *init_game_struct(char *window_name, int width, int height, int fps);

#endif/* CSFML */
