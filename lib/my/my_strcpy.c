/*
** EPITECH PROJECT, 2022
** my_strcpy
** File description:
** day6
*/

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
