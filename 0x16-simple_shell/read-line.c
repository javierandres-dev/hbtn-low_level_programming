#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints "$ ", wait for the user to enter a command,
 * prints it on the next line.
 * Return: output
 */
int main(void)
{
	char *line;
	size_t len = 0;

	line = malloc(sizeof(char) * len);
	if (line == NULL)
	{
		exit(EXIT_FAILURE);
	}

	printf("$ ");
	getline(&line, &len, stdin);
	printf("%s", line);
	free(line);
	exit(EXIT_SUCCESS);
}
