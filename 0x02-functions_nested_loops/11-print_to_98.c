#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	int num;
	int den;

	if (n == 98)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
		_putchar('\n');
	}
	else if (n > 98)
	{
		while ( n >= 98)
		{
			num = n / 10;
			den = n % 10;
			
			if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar('\n');
			}
			else
			{
				if (num > 9)
				{
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					_putchar(num + '0');
				}
			}
			_putchar(den + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else if (n >= 0 && n <= 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
				_putchar('\n');
			}
			else
			{
				if (n < 10)
				{
					_putchar(n + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar((n / 10) + '0');
					_putchar((n % 10) + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			n++;
		}
	}
	else
	{
		while (n <= 98)
		{
			if (n < 0)
			{
				n = -n;
				if (n < -9)
				{
					
				}
			}
			n++;
		}
	}
}
