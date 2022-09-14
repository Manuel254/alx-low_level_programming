#include "main.h"

/**
 * times_table - prints 9 times table
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			
			if (j == 9)
			{
				_putchar(result + '0');
				_putchar('\n');
			}
			else if (result <= 9) 
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
