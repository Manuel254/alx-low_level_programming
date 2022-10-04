#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: character to be initialized
 *
 * Return: pointer to character or NULL
 */
char *create_array(unsigned int size, char c)
{	
	unsigned int i;
	char *ptr = malloc(sizeof(*ptr) * size);

	if ((ptr == NULL) || (size == 0))
		return (NULL);	

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
