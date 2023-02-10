#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The string
 *
 * Return: The length of the string str
 */
int _strlen(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text to append to the file
 *
 * Return:
 * 1 on success
 * -1 if file cant be opened or read
 * -1 if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written_bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_bytes = write(fd, text_content, _strlen(text_content));
		if (written_bytes == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
