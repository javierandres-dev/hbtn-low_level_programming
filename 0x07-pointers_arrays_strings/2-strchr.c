#include "holberton.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: input
 * @c: input
 * Return: output
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			i++;
		}
	}
}
