#include "holberton.h"
/**
 *more_numbers - print all numbers until 14
 *
 *Return: void
 */
void more_numbers(void)
{
	int a;
	int ten;

	ten = 0;

	while (ten < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar(10);
		ten++;
	}
}
