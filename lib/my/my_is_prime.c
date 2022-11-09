/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** day5
*/

int my_is_prime(int nb)
{
    int a = 2;
    if (nb < 2)
        return 0;
    while (nb % a != 0)
        a++;
    if (a == nb)
        return 1;
    if (a != nb)
        return 0;
}
