#include "exercises.h"
/**
* main - function that prints each directory contained in the the environment variable PATH, one directory per line.
*/
int main()
{
	extern char **environ;
	char *name = "PATH";
	char *check;
	int result;
	int i;
	i = 0;
	while(environ[i] != NULL)
	{
		check = strtok(environ[i], "=");
		result = strcmp(name, check);
		if (result  == 0)
		{
			check = strtok(NULL, "\0");
			printf("Print PATH: %s\n", check);
		}
		i++;
	}
	return (0);
}
