#include "exercises.h"
/**
* _getenv - function that gets an environment variable. (without using getenv)
*/
extern char **environ;
int main()
//char *_getenv(const char *name)
{
	char *name = "PATH";
	char *check1;
	char *check2;
	int result1;
	int result2;
	int i;
	//char *name = "USER=vagrant";
	i = 0;
	while(environ[i] != NULL)
	{
		//check = strtok(environ[i], "=");
		check1 = strtok(environ[i], "=");
		//check2 = strtok(environ[i], ":");
		//result = strcmp(name, environ[i]);
		result1 = strcmp(name, check1);
		//result2 = strcmp(name, check2);
		if (result1  == 0)
		{
			//printf("%s\n", environ[i]);
			check1 = strtok(NULL, "\0");
			//return (check);
			printf("Print PATH: %s\n", check1);
		}
		i++;
	}
	//return (NULL);
	return (0);
}
