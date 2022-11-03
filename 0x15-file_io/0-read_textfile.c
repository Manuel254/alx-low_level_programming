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
	int fd, r, w, buff_count;
	char *buffer;

	buffer = malloc(sizeof(*buffer) * letters);

	if (buffer == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 400);

	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);

	if (r == -1)
		return (0);

	buff_count = sizeof(*buffer) * letters;
	w = write(STDOUT_FILENO, buffer, buff_count);

	if (w == -1 || w != buff_count)
		return (0);

	close(fd);
	return (r);
}
