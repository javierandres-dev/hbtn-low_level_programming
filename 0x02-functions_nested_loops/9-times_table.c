#include "holberton.h"
/**
 * times_table -   the 9 times table, starting with 0
 * Return: i * j
 */
void times_table(void)
{
	int i, j, u, d, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			d = result / 10;
			u = result % 10;

			if (result == 0)
			{
				_putchar('0' + u);
			}
			if (i == 0 && j < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (result > 0 && result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + u);
			}
			if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + d);
				_putchar('0' + u);
			}
		}
		_putchar('\n');
	}
}
