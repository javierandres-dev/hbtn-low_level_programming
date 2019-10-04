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
	return (ret);
}
