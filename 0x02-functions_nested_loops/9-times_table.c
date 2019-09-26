#include "holberton.h"
/**
 * times_table -   the 9 times table, starting with 0
 * h for hours, m for minutes
 * Return: row and col
 */
void times_table(void)
{
	int y;
	int x;
	int dig1;
	int dig2;
	int result;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			result = y * x;
			if(result > 9)
			{
				dig1 = result / 10;
				dig2 = result % 10;
				_putchar('0' + dig1);
 				_putchar('0' + dig2);

			}
			else
			{
				dig1 = ' ';
				dig2 = result;
				_putchar(dig1);
				_putchar('0' + dig2);
 			}
			if(dig2 < 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
