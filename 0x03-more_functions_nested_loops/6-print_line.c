#include "holberton.h"
/**
 *print_line - print all the _ that is necesary
 *
 *@n: number of times that should print -
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar(10);
	}
}
