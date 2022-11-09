/*
** EPITECH PROJECT, 2022
** my_strcapitalize
** File description:
** day6
*/

static char *change_str(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] <= 90 && str[i] >= 65)
            str[i] = str[i] + 32;
    return str;
}

char *my_strcapitalize(char *str)
{
    int i = 0;
    change_str(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i - 1] < 48 || str[i - 1] > 58) &&
            (str[i - 1] < 65 || str[i - 1] > 90) &&
            (str[i - 1] < 95 || str[i - 1] > 122) &&
            (str[i] <= 122 && str[i] >= 97))
            str[i] = str[i] - 32;
    }
    return str;
}
