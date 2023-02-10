#include "main.h"

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
 * create_file - Creates a file
 * @filename: The name of the file to create
 * @text_content: String to write to created file
 *
 * Return:
 * 1 on success
 * -1 if file can not be created or written
 * -1 if filename is NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd, content_len;
	
	if (filename == NULL)
		return (-1);

	fd = creat(filename, S_IWUSR | S_IRUSR);
	if (fd == -1)
		return (-1);

	content_len = _strlen(text_content);
	write(fd, text_content, content_len);
	close(fd);
	return (1);
}
