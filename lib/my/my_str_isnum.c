/*
** EPITECH PROJECT, 2022
** my_str_isnum
** File description:
** day6
*/

int my_str_isnum(char const *str)
{
    int j = 0;
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            j++;
        else
            k++;
    }
    if (k == 0 || str[0] == '\0')
        return 1;
    else
        return 0;
}
