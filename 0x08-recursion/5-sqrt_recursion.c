#include "holberton.h"
/**
 * _sqrt_recursion_aux - function auxiliar.
 * @n: input
 * @x: input
 * Return: output
 */
int _sqrt_recursion_aux(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (_sqrt_recursion_aux(n, x + 1));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: input
 * Return: output
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_aux(n, 0));
}
