#include "holberton.h"
#include <stdlib.h>
/**
 *array_range - creates an array
 *
 *@min: frist and lowest number
 *@max: second and higer number
 *
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *a;
	int b;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (a = 0; min <= max; b++, min++)
		a[b] = min;
	return (a);
}
