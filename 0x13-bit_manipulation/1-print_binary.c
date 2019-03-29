#include "hoberton.h"
#include <stdio.h>
/**
 *print_binary - print the binary correspondent to a int
 *
 *@n: the integer
 *@index: the index
 */
void print_binary(unsigned long int n, unsigned int index)
{
	int index = 0;
	int counter;

	if (n == 0)
	{
		_putchar(48);
	}
	for (counter = ((sizeof(n) * 8) - 1); counter >= 0; counter--)
	{
		if ((n >> counter) & 1)
		{
			index = 1;
			_putchar(49);
		}
		else if (index == 1)
		{
			_putchar(48);
		}
	}
}
