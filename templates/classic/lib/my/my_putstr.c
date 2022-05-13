/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** my_putstr.c
*/

#include "my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}
