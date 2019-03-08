#include "holberton.h"
#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *
 *@nmemb: elemts
 *@size: the size
 *
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;
	unsigned int b;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < nmemb; b++)
		a[b] = 0;
	return (a);
}
