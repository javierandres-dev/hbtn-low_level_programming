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
	char *ar;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
		ar[j] = str[j];
	}
	return (ar);
}
