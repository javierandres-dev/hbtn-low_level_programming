#include "holberton.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: input
 * @n: input
 * Return: output
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	while (i < n)
	{
		n--;
		t = a[n];
		a[n] = a[i];
		a[i] = t;
		i++;
	}
}
