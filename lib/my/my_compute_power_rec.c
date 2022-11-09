/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** day5
*/

int my_compute_power_rec(int nb, int p)
{
    int i = 1;
    int j = 0;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    i = nb * my_compute_power_rec(nb, p - 1);
    return i;
}
