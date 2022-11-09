/*
** EPITECH PROJECT, 2022
** my_str_isupper.c
** File description:
** day6
*/

int my_str_isupper(char const *str)
{
    int j = 0;
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            j++;
        else
            k++;
    }
    if (k == 0 || str[0] == '\0')
        return 1;
    else
        return 0;
}
