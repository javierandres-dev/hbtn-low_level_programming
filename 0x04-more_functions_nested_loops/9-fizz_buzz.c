#include <stdio.h>
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
}
