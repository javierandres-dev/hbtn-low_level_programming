#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: input
 * @av: input
 * Return: a pointer to a new string, or NULL if it fails
 * NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int l;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			j++;
		}
		l += j + 1;
	}
	s = malloc(sizeof(char) * (l + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*(s + l) = av[i][j];
			l++;
		}
		*(s + l) = '\n';
		l++;
	}
	return (s);
}
