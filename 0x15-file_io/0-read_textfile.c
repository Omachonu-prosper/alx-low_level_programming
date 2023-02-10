#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and return
 *
 * Return:
 * 0 if filename is NULL
 * 0 if the file cannot be opened or read
 * o if write fails or doesn't write the expected number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t n_bytes;
	char *buffer = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buffer, letters);
	n_bytes = write(1, buffer, letters);
	close(fd);
	return (n_bytes);
}
