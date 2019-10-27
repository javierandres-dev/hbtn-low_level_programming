#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: input
 * @n: input
 * Return: output
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int value;

	va_start(list, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, unsigned int);
		if (i < n - 1)
		{
			printf("%d%s", value, separator);
		}
		if (i == n - 1)
		{
			printf("%d\n", value);
		}
	}
	va_end(list);
}
