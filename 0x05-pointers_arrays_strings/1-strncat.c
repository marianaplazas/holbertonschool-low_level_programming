#include "holberton.h"
/**
 *_strncat - concatenates two strings
 *
 *@dest: frist pointer
 *@src: second pointer
 *@n: the chars to print from src
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int one;
	int two;

	for (one = 0; dest[one] != '\0'; one++)
	{

	}
	for (two = 0; src[two] != '\0'; two++)
	{
		dest[one + two] = src[two];
		if (two == n - 1)
		    break;
	}
/*	dest[two + n] = '\0';*/
	return (dest);
}
