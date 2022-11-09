/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** day7
*/

#include <unistd.h>

int my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb > 0 && nb <= 9) {
        my_putchar(nb + 48);
        return (0);
    }
    if (nb < 0 && nb >= -9) {
        my_putchar('-');
        my_putchar(48 - nb);
        return (0);
    }
    my_put_nbr(nb / 10);
    nb %= 10;
    if (nb < 0)
        nb = -nb;
    my_putchar(nb + 48);
}
