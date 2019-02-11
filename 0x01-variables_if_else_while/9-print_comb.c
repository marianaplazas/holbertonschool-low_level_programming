#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 if is success
 */

int main(void)
{
	int a;

	a = 48;

	while (a < 58)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
