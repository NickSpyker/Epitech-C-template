/*
** EPITECH PROJECT, 2021
** Epitech-C-template
** File description:
** my_strlen.c
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i += 1;
    return i;
}
