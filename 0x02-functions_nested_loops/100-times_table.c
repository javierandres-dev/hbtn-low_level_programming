#include "holberton.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: is greater than 15 or less than 0 the function should not print anything
 * Return: tables
 */
void print_times_table(int n)
{
	int i, j, m, d;

	if ((n < 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				d = i * j;
				if (j != 0)
				{
					_putchar(44);
					_putchar(32);
					if (d <= 9)
					{
						_putchar(32);
						_putchar(32);
					}
				}

				if (d > 99)
				{
					m = d / 10;
					_putchar('0' + m / 10);
					_putchar('0' + m % 10);
				}
				else if ((d >= 10) && (d <= 99))
				{
					_putchar(32);
					_putchar('0' + d / 10);
				}
				_putchar('0' + d % 10);
			}
			_putchar('\n');
		}
	}
}
