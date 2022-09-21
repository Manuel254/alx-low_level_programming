#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the contents of an array
 * @a: Array to be reversed
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;

	while (i >= 0)
	{
		if (i != (n - 1))
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
