#include "holberton.h"
#include <stdio.h>
/**
 *print_array - print array
 *
 *@a: the pointer
 *@n: number of the elements in the array
 */
void print_array(int *a, int n)
{
	int b;

	b = 0;

	while (b < n)
	{
	printf("%d", a[b]);

	if (b != n - 1)
	printf(", ");
	b++;
	}
	putchar(10);
}
