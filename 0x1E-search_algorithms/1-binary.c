#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t f, l, m, i;

	f = 0;
	l = size - 1;

	if (array == NULL)
		return (-1);

	while (f <= l)
	{
		m = f + (l - f) / 2;
		printf("Searching in array: ");
		for (i = f; i < l; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[l]);

		if (value == array[m])
			return (m);
		else if (value < array[m])
		{
			l = m - 1;
		}
		else if (value > array[m])
		{
			f = m + 1;
		}
	}

	return (-1);
}
