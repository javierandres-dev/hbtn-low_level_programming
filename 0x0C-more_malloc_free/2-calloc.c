#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: input
 * @size: input
 * Return: output
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(int) * nmemb);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		ar[i] = 0;
	}
	return (ar);
}
