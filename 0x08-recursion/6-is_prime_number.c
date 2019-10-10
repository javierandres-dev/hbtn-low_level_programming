#include "holberton.h"
/**
 * is_prime_number_aux - function auxiliar.
 * @n: input
 * @x: input
 * Return: output
 */
int is_prime_number_aux(int n, int x)
{
	if (n <= 1 || (n != x && n % x == 0))
	{
		return (0);
	}
	else if (n == x)
	{
		return (1);
	}
	return (is_prime_number_aux(n, x + 1));
}
/**
 * is_prime_number - function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: input
 * Return: output
 */
int is_prime_number(int n)
{
	return (is_prime_number_aux(n, 2));
}
