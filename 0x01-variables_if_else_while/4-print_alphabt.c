#include <stdio.h>
/**
 *main - starts the function
 *
 *Return: 0 if is sucess
 */

int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 113 && a != 101)
		putchar(a);
	}
	putchar(10);
	return (0);
}
