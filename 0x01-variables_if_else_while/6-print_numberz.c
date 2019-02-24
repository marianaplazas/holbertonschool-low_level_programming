#include <stdio.h>
/**
 *main - starts the function
 *
 *Return: 0 if is sucess
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar(10);
	return (0);
}
