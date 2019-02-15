#include "holberton.h"
/**
 *print_diagonal(int n) - print the \ that are necesary
 *
 *@n: number of \ to print
 *
 *Return: the lines
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar(10);

	for (a = 0; a <= n; b++)
	{
		for (b = 0; b < n; a++)
		{

			if (a == b)
			{
				_putchar('\\');
				_putchar(10);
			}
			else
			{
			_putchar(' ');
			}

		}
	}
}
