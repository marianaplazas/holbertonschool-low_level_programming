#include <stdio.h>
#include "holberton.h"
/**
 *get_endianness - checks the endianness
 *
 *Return: 0 if is endian or 1 if is little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int)*c);
}
