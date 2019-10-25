#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: input
 * @n: input
 * Return: output
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *value;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			value = va_arg(list, char*);
			if (value != 0)
			{
				if (i < n - 1)
				{
					printf("%s%s ", value, separator);
				}
				if (i == n - 1)
				{
					printf("%s\n", value);
				}
			}
			else
			{
				printf("nil\n");
			}
		}
	}
	va_end(list);
}
