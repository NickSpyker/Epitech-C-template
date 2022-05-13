/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** cs_window_create.c
*/

#include "csfml.h"

sfRenderWindow *cs_window_create(char *name, int width, int height, int fps)
{
    sfRenderWindow *window = NULL;
    sfVideoMode mode = {0, 0, 0};

    mode.width = width;
    mode.height = height;
    mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(mode, name, sfClose | sfResize, NULL);
    sfRenderWindow_setFramerateLimit(window, fps);
    return window;
}
