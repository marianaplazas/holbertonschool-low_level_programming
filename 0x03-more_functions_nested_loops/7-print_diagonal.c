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
	if (n <= 0)
	{
		_putchar(10);
	}
	else 
	{
		while (n > 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar(10);
	}
}

