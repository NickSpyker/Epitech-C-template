/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** cs_sprite_draw.c
*/

#include "csfml.h"

void cs_sprite_draw(sfRenderWindow *window, sfSprite *sprite, sfVector2f pos)
{
    if (sprite == NULL || window == NULL)
        return;
    sfSprite_setPosition(sprite, pos);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}
