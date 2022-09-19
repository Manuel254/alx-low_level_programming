#include <stdio.h>

/**
 * print_array - prints elements of arrays
 * @*a: pointer to integer array
 * @n: number of elements of array
 */
void print_array(int *a, int n)
{
	int i;
	
	if (n >= 0)
	{	
		for (i = 0; i < n; i++)
		{
			if (a[i] != *(a+(n-1)))
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d\n", a[i]);
			}
		}
	}
}

