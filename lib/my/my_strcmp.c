/*
** EPITECH PROJECT, 2022
** my_strcmp
** File description:
** day6
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    if (s1[i] == '\0' && s2[i] == '\0')
        return 0;
    else
        return s1[i] - s2[i];
}
