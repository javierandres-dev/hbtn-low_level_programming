#include "holberton.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest integer
 */
int largest_number(int a, int b, int c)
{
	if (a > b && c > b)
	{
		largest = a;
	}
	else if (b > c && a > c)
	{
		largest = b;
	}
	else if (c > a && b > a)
	{
		largest = c;
	}
	return (largest);
}
