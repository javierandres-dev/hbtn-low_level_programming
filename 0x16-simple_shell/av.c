#include <stdio.h>
/**
 * main - function that prints all the arguments, without using ac.
 * @av: is a NULL terminated array of strings
 * @ac: is the number of items in av
 * Return: print all the arguments
 */
int main(int ac, char **av)
{
	int i;

	for (i = 1; av[i] != NULL; i++)
	{
		printf("Print each argument without using ac: %s\n", av[i]);
	}
	return (0);
}
