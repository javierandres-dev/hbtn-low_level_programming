#include "holberton.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: Input
 * Return: Always 0
 */
void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y <= size; y++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar(121);
			for (x = 0; x <= size; x++)
			{
				_putchar(120);
				_putchar('\n');
			}
		}
	}
}
