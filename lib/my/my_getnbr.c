/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** cpoolday4
*/

static int my_lenstr(char const *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int my_atoi(char *str)
{
    int i = 0;
    int j = 0;
    int k = my_lenstr(str) - 1;
    int nb;

    while (str[i] != '\0') {
        nb = str[i] - '0';
        j += nb;
        if (i != k)
            j *= 10;
        i++;
    }
    return j;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int j = 1;
    char buffer[256];
    int k = 0;

    while (str[i] < '0' || str[i] > '9')
        i++;
    while (str[i] >= '0' && str[i] <= '0') {
        buffer[k] = str[i];
        if (str[i - 1] == '-')
            j = -1;
        k++;
        i++;
    }
    return my_atoi(buffer) * j;
}
