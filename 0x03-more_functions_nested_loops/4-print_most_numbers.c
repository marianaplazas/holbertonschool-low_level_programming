#include "holberton.h"
/**
 *print_most_numbers - print all numbers until 9 except 2 and 4
 *
 *Return: void
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
	{
		if (c != 50 && c != 52)
		_putchar(c);
	}
	_putchar('\n');
}
