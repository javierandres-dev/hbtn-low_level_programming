#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: input
 * @size: input
 * Return: output
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int x = size * size;
	int sum1 = 0;
	int sum2 = 0;

	while (i < x)
	{
		sum1 += a[i];
		i += size + 1;
	}
	i = size - 1;
	while (i < x - 1)
	{
		sum2 += a[i];
		i += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
