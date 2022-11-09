/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** lib
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg(int nb)
{
    if (nb >= 0)
        my_putchar('P');
    if (nb < 0)
        my_putchar('N');
}
