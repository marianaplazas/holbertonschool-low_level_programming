#include "holberton.h"
/**
 *print_alphabet - function that print the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char az;
	int ten;

	ten = 0;

	while (ten < 10)
	{
		for (az = 97 ; az <= 122 ; az++)
			_putchar(az);
		_putchar('\n');
		ten++;
	}
}
