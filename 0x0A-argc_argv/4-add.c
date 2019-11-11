#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - program that adds positive numbers.
 * @argc: count
 * @argv: vector
 * Return: output
 */
int main(int argc, char **argv)
{
	int i;
	int number;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	i = 1;
	while (argv[i] != '\0')
	{
		if (*argv[i] < 48 || *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			number = atoi(argv[i]);
			sum += number;
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);

}
