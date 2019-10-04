#include "holberton.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: input
 * @s2: input
 * Return: output
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int x;

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i < j)
	{
		x = i;
	}
	else if (i > j)
	{
		x = j;
	}
	else
	{
		x = 0;
	}
	return (x);
}
