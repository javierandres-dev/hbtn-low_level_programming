#include "holberton.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: input
 * Return: outpu
 */
char *rot13(char *s)
{
	int i;
	int j;
	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j]; j++)
		{
			if (s[i] == x[j])
			{
				s[i] = y[j];
				break;
			}
		}
	}
	return (s);
}
