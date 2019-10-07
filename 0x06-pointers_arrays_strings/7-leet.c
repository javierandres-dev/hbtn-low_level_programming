#include "holberton.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: input
 * Return: output
 */
char *leet(char *s)
{
	int i;
	int j;
	char x[] = "aAeEoOtTlL";
	char y[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j]; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
			}
		}
	}
	return (s);
}
