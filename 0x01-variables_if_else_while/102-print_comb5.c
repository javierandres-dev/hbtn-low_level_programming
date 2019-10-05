#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i = '0';
	int j = '1';
	int a = i;
	int b = i;
	int c = i;
	int d = i;

	for (; i <= '9';i++)
	  {
	    for (; j <= '9';j++)
	      {
		putchar(a);
		putchar(b);
		putchar(' ');
		putchar(c);
		putchar(d);
		putchar(',');
		putchar(' ');
		d = j;
	      }
	  }
	putchar('\n');
	return (0);
}
