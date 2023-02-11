#include "main.h"

/**
 * main - The entry point of the program
 * @argc: The number of arguements passed
 * @argv: An array storing all arguements passed
 *
 * Return: Always Zero (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_contents(argv[1], argv[2]);
	return (0);
}

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
 * copy_contents - Copy the contents of a file to another
 * @file_from: The file to copy contents from
 * @file_to: The file to copy contents to
 */
void copy_contents(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, rd, wr, cl1, cl2;
	char *buffer = malloc(sizeof(char) * 1024);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	rd = read(fd_from, buffer, 2048);
	if (rd < 0)
	{
		dprintf(2, "Error: Can't read from %s\n", file_from);
		exit(98);
	}

	fd_to = creat(file_to, S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
	if (fd_to < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	wr = write(fd_to, buffer, 2048);
	if (wr < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	cl1 = close(fd_from);
	cl2 = close(fd_to);
	if (cl1 < 0)
	{
		dprintf(2, "Error: Can't close %d", fd_from);
		exit(100);
	}
	else if (cl2 < 0)
	{
		dprintf(2, "Error: Can't close %d", fd_to);
		exit(100);
	}
}
