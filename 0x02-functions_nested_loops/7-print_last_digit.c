#include "holberton.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: The number input
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int x = n % 10;

	_putchar (x);
	return (0);
}
