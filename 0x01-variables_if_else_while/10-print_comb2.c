#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 if is success
 */

int main(void)
{
	int a;
	int b;

	a = 48;
	b = 48;

	while (a < 58)
	{
		while (b < 58)
		{
		putchar(a);
		putchar(b;)
		if (b == 57 && a == 57)
		{
			putchar(',');
			putchar(' ');
		}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
