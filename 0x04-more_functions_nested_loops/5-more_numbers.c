#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed new line
 * Return: Always 0
 */
void more_numbers(void)
{
	int time = 1;
	int n;
	int dig1;
	int dig2;

	do

	{
		for (n = 0; n <= 14; n++)

		{
			dig1 = n / 10;
			dig2 = n % 10;

			if (dig1 > 0)

			{
				_putchar('0' + dig1);
			}
			_putchar('0' + dig2);
		}
		_putchar('\n');
		time++;
	} while (time <= 10);
}
