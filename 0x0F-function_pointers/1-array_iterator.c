#include <stdlib.h>

/**
 * array_iterator - executes a function on each array element
 * @array: array of integers
 * @size: size of array
 * @action: action to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

