#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * main - first version of a super simple shell that can
 * run commands with their full path, without any argument.
 *
 * Return: Always 0.
 */
int main()
{
	pid_t child;
	int status;
	int i = 0;

	while (i < 5)
	{
		child = fork();
		if (child < 0)
		{
			perror("Error: CHILD < 0 !!!\n");
			return (1);
		}
		if (child == 0)
		{
			sleep(2);
			printf("I'm child, my PID is: %d and my father is: %d\n", getpid(), getppid());
			_exit(0);
		}
		if (child > 0)
		{
			wait(&status);
			printf("I'm father, my PID is: %d\n", getpid());
		}
		i++;
	}
	return (0);
}
/*
  char *line;
  size_t len;
  line = malloc(sizeof(char) * len);
  if (line == NULL)
  {
  free(line);
  return (0);
  }
  printf("#cisfun$ ");
  getline(&line, &len, stdin);
  printf("You wrote: %s", line);
  char *argv[2];
  argv[0] = "prompt";
  argv[1] = NULL;
  if (execve(argv[0], argv, NULL) == -1)
  {
  perror("Error: !!!");
  }
*/
