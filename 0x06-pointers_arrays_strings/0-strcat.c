#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int len_dest, len_src, i;

	len_dest = strlen(dest);
	len_src = strlen(src);
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[len_src];
	}
	return (dest);
}
