#include <stdio.h>
/**
 * main - It is Fizz-Buzz test
 * Return: Always 0
 */
int main(void)
{
	int n;
	int x;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			if (n % 3 == 0 && n % 5 == 0)
			{
				printf("FizzBuzz ");
			}

			else if (n % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz ");
			}
		}
		else
		{
			x = n;
			printf("%d ", x);
		}
	}
	printf("\n");
	return (0);
}
