#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: input
 * Return: output
 */
int factorial(int n)
{
	if (n <= 1)
	{
		if (n < 0)
		{
			return (-1);
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
