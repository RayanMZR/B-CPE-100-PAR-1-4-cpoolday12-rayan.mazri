/*
** EPITECH PROJECT, 2022
** my_sort_int_array
** File description:
** cpoolday4
*/

void my_sort_int_array(int *array, int size)
{
    int swap;

    for (int i = 0; i < size - 1;) {
        if (array[i + 1] < array[i]) {
            swap = array[i];
            array[i] = array[i + 1];
            array[i + 1] = swap;
            i = 0;
        } else
            i += 1;
    }
}
