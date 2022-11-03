#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: string to add at the end of file
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	/* check for filename validity */
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		/* Open a file */
		fd = open(filename, O_RDWR, 0600);
		if (fd == -1)
			return (-1);
	}
	else
	{
		/* Open a file */
		fd = open(filename, O_RDWR | O_APPEND, 0600);
		if (fd == -1)
			return (-1);

		/* Append to file */
		w = write(fd, text_content, strlen(text_content));
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
