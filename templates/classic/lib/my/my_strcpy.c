/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** my_strcpy.c
*/

#include "my.h"

char *my_strcpy(char const *str)
{
    int size = my_strlen(str);
    char *result = NULL;

    result = malloc(sizeof(char) * (size + 1));
    for (int i = 0; i < size; i++)
        result[i] = str[i];
    result[size] = '\0';
    return result;
}
