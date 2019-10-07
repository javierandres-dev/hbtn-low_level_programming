#include "holberton.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: input
 * @src: input
 * @n: input
 * Return: output
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int j;


	for (i = 0; i < n; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
	}
	return (dest);
}
