/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** my_putchar.c
*/

#include "my.h"

void my_putchar(char const c)
{
    write(1, &c, 1);
}
