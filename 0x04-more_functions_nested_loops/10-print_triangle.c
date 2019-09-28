#include "holberton.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: Input
 * Return: 0
 */
void print_triangle(int size)
{
	int i;
	int j;
	int aux;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				for (aux = 1; aux <= size; j++)
				{
					if (j == size || aux < size)
					{
						_putchar('#');
					}
					else
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
