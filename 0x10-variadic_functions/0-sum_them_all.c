#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: input
 * Return: output
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list al;
	unsigned int i;
	int sum = 0;

	va_start(al, n);
	if (n  == 0)
	{
		return (0);
	}
	i = 0;
	while (i < n)
	{
		sum += va_arg(al, int);
		i++;
	}
	va_end(al);
	return (sum);
}
