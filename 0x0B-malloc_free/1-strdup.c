#include <stdlib.h>
#include <string.h>

/**
 * _strdup - stores a copy of a string
 * @str: pointer to string
 *
 * Return: pointer to new string or NULL
 */
char *_strdup(char *str)
{
	char *ptr = malloc(sizeof(char) * (strlen(str) + 1));
	unsigned long int i;

	if ((ptr == NULL) || (str == NULL))
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
		ptr[i] = str[i];

	return (ptr);
}
