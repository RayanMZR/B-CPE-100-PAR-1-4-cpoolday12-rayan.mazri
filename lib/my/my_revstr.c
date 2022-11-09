/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** day6
*/

int my_strlen(char *str);

char *my_revstr(char *str)
{
    int j = my_strlen(str) / 2;
    int k = my_strlen(str) - 1;
    char swap;
    for (int i = 0; i != j; i++) {
        swap = str[i];
        str[i] = str[k];
        str[k] = swap;
        k--;
    }
    return str;
}
