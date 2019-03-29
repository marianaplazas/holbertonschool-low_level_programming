#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *binary_to_uint - convert a string to unsigned int
 *
 *@b: pointer to the string
 *
 *Return: the convert
 */
unsigned int binary_to_uint(const char *b)
{
	int counter = 0;
	unsigned int convert = 0;

	if (b == NULL)
		return (0);
	while (b[counter])
	{
		if (b[counter] != 48 && b[counter] != 49)
			return (0);
		convert <<= 1;
		if (b[counter] == 49)
			convert ^= 1;
		counter++;
	}
	return (convert);
}
