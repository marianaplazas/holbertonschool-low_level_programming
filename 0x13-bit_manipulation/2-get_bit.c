#include "holberton.h"
#include <stdio.h>
/**
 *get_bit - get a bite acording with the index
 *
 *@index: the index
 *@n: the number
 *
 *Return: the number or -1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	return ((n >> index & 1) ? 1 : 0);
}
