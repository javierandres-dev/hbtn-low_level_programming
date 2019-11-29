#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _puts - check the code for Holberton School students.
 * @str: The variable for print
 * Return: Always 0.
 */
void _puts(char *str)
{
	int a;

	for (; str[a] != 0; a++)
		_putchar(*(str + a));
	_putchar('\n');
}
/**
 * main - program that multiplies two positive numbers.
 * @argc: input
 * @argv: input
 * Return: Always  0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, res;

	res = 1;
	if (argc > 2)
	{
		for (a = 1; a < argc; a++)
		{
			res = res * atoi(argv[a]);
		}
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
