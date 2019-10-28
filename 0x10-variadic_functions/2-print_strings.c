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
	if (separator != NULL)
	{
		va_list list;
		unsigned int i;
		char *value;

		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			value = va_arg(list, char*);
			if (value == 0)
			{
				printf("(nil)");
			}
			if (i < n - 1)
			{
				printf("%s%s ", value, separator);
			}
			if (i == n - 1)
			{
				printf("%s", value);
			}
		}
		va_end(list);
		printf("\n");
	}
}
