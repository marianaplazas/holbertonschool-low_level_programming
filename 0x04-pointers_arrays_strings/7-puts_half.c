#include "holberton.h"
/**
 *puts_half - print half the string
 *
 *@str: the pointer
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	a++;
	for (a = a / 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
