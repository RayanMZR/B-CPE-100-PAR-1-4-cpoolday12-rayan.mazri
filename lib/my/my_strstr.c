/*
** EPITECH PROJECT, 2022
** my_strstr
** File description:
** day6
*/

#include <string.h>

int my_strlen(char const *str);

char *my_strstr(char *str, char const *to_find)
{
    int j = 0;
    int k;
    int l;

    for (int i = 0; str[i] != '\0';) {
        k = i;
        while (str[i] == to_find[j] && to_find[j] != '\0') {
            j++;
            i++;
        }
        l = i - j;
        if (my_strlen(to_find) == j)
            return str + l;
        i = k + 1;
        j = 0;
    }
    return NULL;
}
