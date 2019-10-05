#include "holberton.h"
/**
 * leet - function that encodes a string into 1337.
 * @s: input
 * Return: output
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		switch (s[i] >= 0)
		{
		case 1:
			if (s[i] == 65 || s[i] == 97)
			s[i] = 52;
		case 2:
			if (s[i] == 69 || s[i] == 101)
			s[i] = 51;
		case 3:
			if (s[i] == 79 || s[i] == 111)
			s[i] = 48;
		case 4:
			if (s[i] == 84 || s[i] == 116)
			s[i] = 55;
		case 5:
			if (s[i] == 76 || s[i] == 108)
			s[i] = 49;


		default:
			break;
		}
	}
	return (s);
}
