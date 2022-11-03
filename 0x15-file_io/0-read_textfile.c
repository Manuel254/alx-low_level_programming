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

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open file */
	fd = open(filename, O_RDONLY, 400);
	if (fd == -1)
		return (0);

	/* Create buffer */
	buff_count = sizeof(*buffer) * letters;
	buffer = malloc(buff_count);
	if (buffer == NULL)
		return (0);

	/* Read file */
	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);

	/* Write to output */
	w = write(STDOUT_FILENO, buffer, buff_count);
	if (w == -1 || w != buff_count)
		return (0);

	close(fd);
	free(buffer);
	return (r);
}
