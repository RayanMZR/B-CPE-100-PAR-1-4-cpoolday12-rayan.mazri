/*
** EPITECH PROJECT, 2022
** cat
** File description:
** day12
*/

#include "../include/my.h"
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int display_file(char *str)
{
    int fd = 0;
    char buffer[30000];
    errno = 0;
    fd = open(str, O_RDONLY);
    if (errno == 0) {
        read(fd, buffer, 30000);
        my_putstr(buffer);
        for (int i = 0; i <= 30000; i++)
            buffer[i] = 0;
        close(fd);
    } else {
        my_putstr("cat: ");
        my_putstr(str);
        my_putstr(": No such file or directory\n");
        return 84;
    }
    return 0;
}

int arg_one(void)
{
    int size_buffer = 30000;
    char buffer[size_buffer];
    int fd;
    int i = 1;
    while (i != 0) {
        i = read(0, buffer, size_buffer - 1);
        if (i == 0)
            return 0;
        my_putstr(buffer);
        buffer[i] = '\0';
    }
    close(fd);
}

int main(int ac, char **av)
{
    int size_buffer = 30000;
    char buffer[size_buffer];

    if (ac < 1)
        return 84;
    if (ac == 1)
        arg_one();
    for (int i = 1; i < ac; i++)
        display_file(av[i]);
    return 0;
}
