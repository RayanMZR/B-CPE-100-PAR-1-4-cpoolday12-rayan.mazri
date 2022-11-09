/*
** EPITECH PROJECT, 2022
** my_find_prime_sup
** File description:
** day5
*/

int my_find_prime_sup(int nb)
{
    int a = 2;
    int b = nb;
    if (nb <= 2)
        return 2;
    while (1) {
        if (a != b && b % a == 0) {
            b++;
            a = 2;
        }
        if (b % a == 0 && b == a) {
            return b;
        }
        a++;
    }
}
