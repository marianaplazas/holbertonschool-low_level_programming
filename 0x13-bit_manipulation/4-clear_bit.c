#include "holberton.h"
#include <stdio.h>
/**
 *clear_bit - set a bit to 0 according with the index
 *
 *@n: the pointer to the number
 *@index: thye bit to set
 *
 *Return: 1 if is success or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);
	return (1);
}
