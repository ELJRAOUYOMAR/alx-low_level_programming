#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The content to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int fd, len, written;

    if (filename == NULL)
        return (-1);

    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
        return (-1);

    if (text_content == NULL)
    {
        close(fd);
        return (1);
    }

    for (len = 0; text_content[len] != '\0'; len++)
        continue;

    written = write(fd, text_content, len);
    close(fd);

    return (written == len ? 1 : -1);
}

