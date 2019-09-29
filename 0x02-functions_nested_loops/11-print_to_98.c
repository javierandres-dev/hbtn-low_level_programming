#include <stdio.h>
#include "holberton.h"
/**
 * print_to_98 - prints all numbers from n to 98, followed by a new line
 * @n: Input
 * Return: Results
 */
void print_to_98(int n)
{
	int to = 98;
	int i;

	if (n == to)
	{
		printf("%d", n);
	}
	else
	{
	if (n <= to)
	{
		for (i = n; i <= to; i++)
		{
			if (i < to)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	if (n >= to)
	{
		for (i = n; i >= to; i--)
		{
			if (i > to)
			{
				printf("%d ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	}
	printf("\n");
}
