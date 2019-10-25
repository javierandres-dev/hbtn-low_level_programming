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
	va_list mylist;
	int sum = 0;
	unsigned int i;

	va_start(mylist, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(mylist, int);
	}

	va_end(mylist);

	if (n  == 0)
	{
		return (0);
	}
	else
	{
		return (sum);
	}
}
