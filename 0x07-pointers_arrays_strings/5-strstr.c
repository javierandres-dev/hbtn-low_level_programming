#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: input
 * @needle: input
 * Return: output
 */
char *_strstr(char *haystack, char *needle);
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j] && haystack[i] != '\0'; && needle[j] != '\0')
			{
				i++;
				j++;
				return (haystack);
			}
		}
	}
	return (0);
}
