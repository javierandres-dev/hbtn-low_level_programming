#include "function_pointers.h"
/**
 * print_name - function that prints a name.
 * @name: input
 * @f: input
 * Return: output
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
