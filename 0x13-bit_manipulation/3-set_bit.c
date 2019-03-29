#include "holberton.h"
/**
 * set_bit - sets acording with the index
 *
 *@n: the number
 *@index: uis the index
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || !n)
		return (-1);
	if (index > (sizeof(*n) * 8) - 1)
		return (-1);
	*n = *n | 1 << index;
	return (1);
}
