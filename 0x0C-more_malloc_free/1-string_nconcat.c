#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: input
 * @s2: input
 * @n: input
 * Return: output
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ar;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		k = i + j;
	else
		k = i + n;
	ar = malloc(k + 1);
	if (ar == NULL)
		return (NULL);
	for (l = 0; l < i && s1[l] != '\0'; l++)
	{
		ar[l] = s1[l];
	}
	for (l = 0; l < j && s2[l] != '\0'; l++)
	{
		ar[l + i] = s2[l];
	}
	ar[k] = '\0';
	return (ar);
}
