#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 if is success
 */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (a = 97; a < 103; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
