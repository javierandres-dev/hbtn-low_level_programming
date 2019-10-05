#include "holberton.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: input
 * Return: output
 */
char *leet(char *s)
{
	int l[20] = {65, 52, 97, 52, 69, 51, 101, 51, 79, 48,
		     111, 48, 84, 55, 116, 55, 76, 49, 108, 49};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (l[j] == s[i])
			{
				s[i] = l[++j];
			}
		}
	}
	return (s);
}
