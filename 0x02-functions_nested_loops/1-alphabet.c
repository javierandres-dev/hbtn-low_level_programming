#include "holberton.h"
/**
 * print_alphabet - writes the alphabet in lowercase
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_alphabet(void)

{
	char letra = 'a';

	do

	{
		_putchar (letra);
		letra++;
	} while (letra <= 'z');
	_putchar ('\n');
	return (0);
}
