/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** my_strcmp.c
*/

int my_strcmp(char const *str_a, char const *str_b)
{
    while (*str_a && *str_a == *str_b) {
        str_a += 1;
        str_b += 1;
    }
    return *str_a - *str_b;
}
