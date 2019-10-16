#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input
 * @s2: input
 * Return: output
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int k;
	char *ar;
	int l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	k = i + j;
	ar = malloc(sizeof(char) * k + 1);
	if (ar == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (l = 0; l <= k && s1[l] != '\0'; l++)
	{
		ar[l] = s1[l];
	}
	for (l = 0; l <= k && s2[l] != '\0'; l++)
	{
		ar[l + i] = s2[l];
	}
	ar[k] = '\0';
	return (ar);
}
