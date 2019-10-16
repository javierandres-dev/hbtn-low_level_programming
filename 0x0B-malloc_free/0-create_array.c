#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: input
 * @c: input
 * Return: output
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
