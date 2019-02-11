#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 if is success
 */

int main(void)
{
	int b;

	b = 'a';
	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
		{
			putchar(b);
		}
		b++;
	}
	putchar('\n');
	return (0);
}
