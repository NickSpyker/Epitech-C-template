/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** struct.h
*/

#ifndef STRUCT
    #define STRUCT

    #include "lib.h"

    typedef struct s_game game_t;

struct s_game {
    sfRenderWindow *window;
    sfClock *clock;
    sfEvent event;
    float dt;
};

#endif/* STRUCT */
