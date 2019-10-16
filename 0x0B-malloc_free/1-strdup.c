#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: input
 * Return: output
 */
char *_strdup(char *str)
{
	int i = 0;
	int j;
	char *ar;

	while (str[i] != '\0')
	{
		i++;
	}
	ar = malloc(i * sizeof(char) + 1);
	if (i == 0 || str == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		ar[j] = str[j];
	}
	return (ar);
}
