#include "holberton.h"
/**
 *print_rev - print in reverse the string
 *
 *@s: the pinter
 */
void print_rev(char *s)
{
	int a;

	while (s[a] != '\0')
		a++;
	a--;
	while (a >= 0)
	{
	_putchar(s[a]);
	a--;
	}
	_putchar(10);
}
