#include "holberton.h"
/**
 *print_alphabet - function that print the alphabet
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char az;

	for (az = 97 ; az <= 122 ; az++)
		_putchar(az);
	_putchar('\n');

}
