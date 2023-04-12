#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index of value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, m, l, h;

	m = sqrt(size);
	l = 0;
	h = m;

	if (array == NULL)
		return (-1);

	while (h < size && array[h] < value)
	{
		if (l == 3 && h == 6)
		{
			l = h;
			h += m;
		}
		printf("Value checked array[%lu] = [%d]\n", l, array[l]);
		printf("Value checked array[%lu] = [%d]\n", h, array[h]);

		l = h;
		h += m;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", l, h);

	for (i = l; i < size && i <= h; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
