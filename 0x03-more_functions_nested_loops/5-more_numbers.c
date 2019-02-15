#include "holberton.h"
/**
 *more_numbers - print all numbers until 14
 *
 *Return: void
 */
void more_numbers(void)
{
	int a;

	for(a = '0' ; a < '9' ; a++)
	{
		_putchar(a);
	}
	_putchar(10);
}
