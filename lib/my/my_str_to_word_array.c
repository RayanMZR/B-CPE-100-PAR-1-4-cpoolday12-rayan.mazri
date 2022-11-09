/*
** EPITECH PROJECT, 2022
** my_str_to_word_array
** File description:
** day8
*/

#include <stdlib.h>

int my_strlen(char *str);

char *my_strcpy(char *dest, char const *src);

static int valid_char(char const *str)
{
    int j = 1;

    for (int i = 0; str[i] != '\0'; i++)
        if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' ||
        str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
            j++;
    return j;
}

static int word_len(char const *str, int n)
{
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0' && k <= n; i++) {
        if (k == n)
            j++;
        if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z')
            && (str[i] < 'a' || str[i] > 'z'))
            k++;
    }
    return j;
}

static void cp_str(char const *str, char *buffer, int n)
{
    int j = 0;
    int k = 0;

    for (int i = 0; str[i] != '\0' && k <= n; i++) {
        if (k == n) {
            buffer[j] = str[i];
            j++;
        }
        if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z')
            && (str[i] < 'a' || str[i] > 'z'))
            k++;
    }
    buffer[j] = '\0';
}

static char **run_tab_null(char **tab)
{
    int j = 0;
    int k = 0;

    for (int i = 0; tab[i]; i++)
        if (tab[i][0] != '\0')
            j++;
    char **str = malloc(j * sizeof(char*) + 1);
    for (int i = 0; i < j; i++)
        str[i] = malloc((my_strlen(tab[i]) + 1) * sizeof(char));
    for (int i = 0; tab[i]; i++) {
        if (tab[i][0] != '\0')
            my_strcpy(str[k++], tab[i]);
    }
    str[k] = 0;
    return str;
}

char **my_str_to_word_array(char const *str)
{
    int valid = valid_char(str);
    char **tab = malloc(valid * sizeof(char*));
    int len;
    for (int i = 0; i < valid; i++) {
        len = word_len(str, i);
        char *buffer = malloc(len + 1);
        cp_str(str, buffer, i);
        if (i == valid - 1)
            buffer[len] = '\0';
        else
            buffer[len - 1] = '\0';
        tab[i] = buffer;
    }
    tab[valid] = 0;
    return run_tab_null(tab);
}
