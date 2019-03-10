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

	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
		putchar(a);
		putchar(b);
		if (a != 57 || b != 57)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
