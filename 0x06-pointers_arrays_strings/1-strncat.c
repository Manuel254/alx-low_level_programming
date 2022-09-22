#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	len_dest = strlen(dest);
	for (i = 0; i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
