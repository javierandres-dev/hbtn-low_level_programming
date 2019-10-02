#include "holberton.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input
 * Return: output
 */
void puts_half(char *str)
{
	int i = 0;
	int j;
	int k;

	while (str[i] != '\0')
	{
		i++;
	}
	k = i / 2;
	i--;
	for (j = k; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
