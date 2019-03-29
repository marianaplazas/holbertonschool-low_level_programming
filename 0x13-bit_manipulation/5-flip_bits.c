#include "holberton.h"
#include <stdio.h>
/**
 *flip_bits - found the number to flip
 *
 *@n: the number
 *@m: the other number to flip
 *
 *Return: flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip = 0;
	int aux;
	int size = ((sizeof(n) * 8) - 1);

	for (aux = 0; aux <= size; aux++)
	{
		if (((n ^ m) >> aux)  & 1)
			flip++;
	}

	return (flip);
}
