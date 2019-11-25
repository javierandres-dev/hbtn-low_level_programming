#include <stdio.h>
/**
* _getenv - function that gets an environment variable. (without using getenv)
*/
extern char **environ;
char *_getenv(const char *name)
{
	int i;
i	char *s;

	i = 0;
	s = "PATH";
	while(environ[i] != NULL)
	{
		if (
		printf("%s\n", environ[i]);
		i++;
	}
}
