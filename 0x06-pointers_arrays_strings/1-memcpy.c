#include "holberton.h"
/**
 *_memcpy - copies the n bytes in the other variable
 *
 *@dest: the destiny
 *@src: the source
 *@n: the number of bytes to copy
 *
 *Return: the copy bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}
	return (dest);
}
