#include "holberton.h"
/**
 *_strcat - concatenates two strings
 *
 *@dest: frist pointer
 *@src: second pointer
 *
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int one;
	int two;

	for (one = 0; dest[one] != '\0'; one++)
	{

	}
	for (two = 0; src[two] != '\0'; two++)
	{
		dest[one + two] = src[two];
	}
	dest[one + two] = '\0';
	return (dest);
}
