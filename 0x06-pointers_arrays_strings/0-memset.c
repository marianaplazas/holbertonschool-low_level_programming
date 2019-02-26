#include "holberton.h"
/**
 *_memset - replace the value of the array for the constant n times
 *
 *@s: the start pointer
 *@b: constant
 *@n: the times to change
 *
 *Return: the values change
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
		s[counter] = b;

	return (s);
}
