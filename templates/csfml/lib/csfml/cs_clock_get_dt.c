/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** cs_clock_get_dt.c
*/

#include "csfml.h"

float cs_clock_get_dt(sfClock *clock)
{
    sfTime time = {0};
    float delta = 0;

    if (clock == NULL)
        return 0;
    time = sfClock_getElapsedTime(clock);
    delta = time.microseconds / 1000000.00;
    sfClock_restart(clock);
    return delta;
}
