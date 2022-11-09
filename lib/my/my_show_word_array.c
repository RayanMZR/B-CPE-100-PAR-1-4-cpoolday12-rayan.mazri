/*
** EPITECH PROJECT, 2022
** my_show_word_array
** File description:
** day8
*/

#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i]; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++)
            my_putchar(tab[i][j]);
        my_putchar('\n');
    }
    return 0;
}
