#include "holberton.h"
/**
 *swap_int - changes the value of the vraibles
 *
 *@b: pointer
 *@a: pointer
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
