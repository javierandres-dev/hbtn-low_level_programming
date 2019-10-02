#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: input
 * @n: input
 * Return: output
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != '\0')
	{
		i++;
	}
	while (n > 1)
	{
		printf("%d, ", a[i]);
	n--;
	}
	printf("%d", a[i]);
	printf("\n");
}
