#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block using malloc and free.
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: output
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ar;

	ar = malloc(new_size);
	if (ar == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		ar[0] = new_size;
	}
	if (new_size == old_size)
	{
		return (ptr);
		exit(1);
	}
	if (ptr == NULL)
	{
		return (ar);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	return (ar);
}
