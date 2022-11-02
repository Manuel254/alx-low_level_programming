#include "main.h"

/**
 * read_textfile - reads a text file and prints to POSIX
 * @filename: pointer to the name of file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 400);

	if (fd == -1)
		return (0);

	n = read(fd, buffer, letters);

	if (n == -1)
		return (0);

	write(STDOUT_FILENO, buffer, (sizeof(*buffer) * letters));

	close(fd);
	return (n);
}
