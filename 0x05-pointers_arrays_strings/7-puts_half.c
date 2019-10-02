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

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 != 0)
	{
		i++;
	}
	for (j = i / 2; str[j] != '\0' ;j++)
		{
			_putchar(str[j]);
		}
	_putchar('\n');
}
