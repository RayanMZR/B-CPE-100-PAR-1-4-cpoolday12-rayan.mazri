/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** day6
*/

char *my_strncpy(char *dest ,char const *src, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        if (src[i] == '\0')
            dest[i] = '\0';
        else
            dest[i] = src[i];
    }
    return dest;
}
