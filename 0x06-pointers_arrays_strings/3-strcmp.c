#include "holberton.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: input
 * @s2: input
 * Return: output
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int ret;

	for (i = 0; i != s1['\0']; i++)
	{
		ret = s1[i] - s2[i];
		if (ret != 0)
		{
			break;
		}
	}
<<<<<<< HEAD

	while (s2[j] != '\0')
	{
		j++;
	}

	if (i > j)
	{
		x = i;
	}
	else if (i < j)
	{
		x = j;
	}
	else
	{
		x = 0;
	}
	return (x);
=======
	return (ret);
>>>>>>> 99bcf252d44b5e894b55241b1efe4b31f929dd35
}
