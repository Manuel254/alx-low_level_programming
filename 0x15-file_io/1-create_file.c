#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: string to be written to file
 *
 * Return: 1 on success. -1 on failure
 * (file cannot be created, file cannot be written,
 * write fails, etc
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;

	/* Checking filename validity */
	if (filename == NULL)
		return (-1);

	/* Handling NULL content */
	if (text_content == NULL)
	{
		fd = open(filename, O_TRUNC | O_RDWR | O_CREAT, 00600);
		if (fd == -1)
			return (-1);
	}
	else
	{
		fd = open(filename, O_TRUNC | O_RDWR | O_CREAT, 00600);
		if (fd == -1)
			return (-1);

		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
