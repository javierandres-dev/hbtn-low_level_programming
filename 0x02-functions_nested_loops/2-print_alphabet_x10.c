#include "holberton.h"
/**
 * print_alphabet_x10 - writes 10 times the alphabet in lowercase
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_alphabet_x10(void)

{
	int i = 10;

	for (i = 1; i <= 10; i++)

	{
		char letra = 'a';

		do

		{
			_putchar (letra);
			letra++;
		} while (letra <= 'z');
		_putchar ('\n');
	}
	return (0);
}
