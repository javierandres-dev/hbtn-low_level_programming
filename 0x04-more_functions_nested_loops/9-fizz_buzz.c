#include <stdio.h>
<<<<<<< HEAD
int main()
{
	int n = 1;
	int mul3;
	int show;

	do
	{
		mul3 = 3 * n;

		if (n == mul3)
		{
			show = 333;
		printf("%d Fizz", show);
		}
		n++;
	}
	while (n <= 100);
	printf("\n");
	printf("%d ", n);
	return 0;
=======
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
>>>>>>> bcbbdddacb50fc929e423b95e635ca0231cccbdd
}
