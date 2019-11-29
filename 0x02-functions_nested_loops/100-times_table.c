#include "holberton.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: is greater than 15 or less than 0 the function should not print anything
 * Return: tables
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;


	for (a = 0; a <= n; a++)
	{
		if(n < 0 || n > 15)
		{
			continue;
		}
		for (b = 0; b <= n; b++)
		{
			c = b * a;
			if ((c > 9) && (c < 100))
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b == n)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (c > 99)
			{
				_putchar((c / 100) + '0');
				_putchar(((c % 100)/ 10)+ '0');
				_putchar((c % 10) + '0');
				if (b == n)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(c + '0');
				if (b == n)
				{
					continue;
				}
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
