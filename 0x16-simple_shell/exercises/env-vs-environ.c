#include <stdio.h>
/**
* main - program that prints the address of env
* (the third parameter of the main function) and environ (the global variable).
*/
int main(int ac, char **av, char **env)
{
	int i;

	i = 0;
	while (env[i] != NULL)
	{
		printf("The address of env: %d", env[&i]);
		i++;
	}
	return (0);
}
