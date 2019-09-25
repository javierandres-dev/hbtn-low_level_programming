#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: The number input
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
		_putchar('0' + x);
	}
	else
	{
		_putchar('0' + x);
	}
	return (x);
}
