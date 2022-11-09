/*
** EPITECH PROJECT, 2022
** my_compute_square
** File description:
** day5
*/

int my_compute_square_root(int nb)
{
    int i = 1;

    while (i * i < nb)
        i++;
    if (i * i == nb)
        return i;
    else
        return 0;
}
