#include "holberton.h"
/**
 * length - function auxiliar that returns the length of a string
 * @s: input
 * Return: output
 */
int length(char *s)
{
	if (*s != '\0')
	{
		return (1 + length(s + 1));
	}
	return (0);
}
/**
 * aux - function auxiliar.
 * @s: input
 * @x: input
 * Return: output
 */
int aux(char *s, int x)
{
	if (x <= 0)
	{
		return (1);
	}
	if (*s == *(s + x - 1))
	{
		return (aux(s + 1, x - 2));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: input
 * Return: output
 */
int is_palindrome(char *s)
{
	int x = length(s);

	return (aux(s, x));
}
