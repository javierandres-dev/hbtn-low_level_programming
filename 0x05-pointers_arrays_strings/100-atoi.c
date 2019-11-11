#include "holberton.h"
/**
 * _atoi - function that convert a string to an integer.
 * @s: pointer to string
 * Return: output
 */
int _atoi(char *s)
{
	int i;
	int j;
	int sign;
	unsigned int number;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		sign = 0;
		if (s[j] == 45)
		{
			sign++;
		}
		number = 0;
		if (s[j] >= 48 && s[j] <= 57)
		{
			number = (number * 10) + s[j];
			return (number * sign);
		}
		else
		{
			return (0);
		}
	}
}
