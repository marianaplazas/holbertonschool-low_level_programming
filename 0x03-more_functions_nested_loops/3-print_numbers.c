#include "holberton.h"
/**
 *print_numbers - print the numbers start 0 until 9
 *
 *Return: 0 if is succes
 */
void print_numbers(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
	{
		_putchar (n);
	}
	_putchar(10);
}
