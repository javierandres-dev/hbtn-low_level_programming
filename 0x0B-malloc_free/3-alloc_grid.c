#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers.
 * @width: input
 * @height: input
 * Return: output
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int *) * height);
	if (ar  == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			for (k = 0; k <= i; k++)
			{
				free(ar[k]);
			}
			free(ar);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
