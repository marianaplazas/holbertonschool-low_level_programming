#include "holberton.h"
/**
 *_print_rev_recursion - print in reverse the string
 *
 *@s: the pointer to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
	else
	{
		_putchar(10);
	}
}
