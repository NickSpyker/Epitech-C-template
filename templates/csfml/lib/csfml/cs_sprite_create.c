/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** cs_sprite_create.c
*/

#include "csfml.h"

sfSprite *cs_sprite_create(char *path_to_file)
{
    sfSprite *sprite = NULL;
    sfTexture *texture = NULL;

    sprite = sfSprite_create();
    texture = sfTexture_createFromFile(path_to_file, NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfTexture_setRepeated(texture, sfTrue);
    return sprite;
}
