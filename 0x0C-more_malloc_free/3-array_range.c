#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *ptr, i, diff;

	diff = max - min;
	ptr = malloc(sizeof(int) * (diff + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
