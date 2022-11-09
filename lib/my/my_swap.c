/*
** EPITECH PROJECT, 2022
** my_swap
** File description:
** lib
*/

void my_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
