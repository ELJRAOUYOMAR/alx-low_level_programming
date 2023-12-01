#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of one file to another file
 * @ac: The number of arguments
 * @av: The array of arguments
 *
 * Return: 0 on success, otherwise exit with the appropriate error code
 */
int main(int ac, char **av)
{
    int fd_from, fd_to, rd, wr;
    char buf[BUF_SIZE];

    if (ac != 3)
    {
        dprintf(2, "Usage: %s file_from file_to\n", av[0]);
        exit(97);
    }

    fd_from = open(av[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(2, "Error: Can't read from file %s\n", av[1]);
        exit(98);
    }

    fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(2, "Error: Can't write to %s\n", av[2]);
        close(fd_from);
        exit(99);
    }

    do
    {
        rd = read(fd_from, buf, BUF_SIZE);
        if (rd == -1)
        {
            dprintf(2, "Error: Can't read from file %s\n", av[1]);
            close(fd_from);
            close(fd_to);
            exit(98);
        }

        wr = write(fd_to, buf, rd);
        if (wr == -1 || wr != rd)
        {
            dprintf(2, "Error: Can't write to %s\n", av[2]);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    } while (rd == BUF_SIZE);

    if (close(fd_from) == -1 || close(fd_to) == -1)
    {
        dprintf(2, "Error: Can't close fd\n");
        exit(100);
    }

    return (0);
}

