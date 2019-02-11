#include <stdio.h>
/**
 * main - start
 *
 * Return: 0
 */

int main(void)
{
	int a;

	a = 122;

	while (a > 96)
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);
}
