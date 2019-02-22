#include "holberton.h"
/**
 *_strncpy - copy the string
 *
 *@dest: final
 *@src: intial
 *@n: variable
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int one;

	for (one = 0; src[one] != '\0' && one < n; one++)
	{
		dest[one] = src[one];
	}
	for (one = one; one < n; one++)
	{
		dest[one] = '\0';
	}
	return (dest);
}
