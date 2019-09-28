#include <stdio.h>
/**
 * main - It is Fizz-Buzz test
 * Return: print results
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			if (n % 3 == 0 && n % 5 == 0)
			{
				printf("FizzBuzz ");
			}

			if (n % 3 == 0 && n % 5 != 0)
			{
				printf("Fizz ");
			}
			if (n % 5 == 0 && n % 3 != 0)
			{
				if (n == 100)
				{
					printf("Buzz");
				}
				else
				{
					printf("Buzz ");
				}
			}
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");
	return (0);
}
