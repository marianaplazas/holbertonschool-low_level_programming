#include "holberton"
/**
 *print_to_98 - prints all nature numbers from n to 98
 *
 *@n: initial number
 *
 *Return: all the numbers until 98
 */
void print_to_98(int n);
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

