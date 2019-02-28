#include "holberton.h"
/**
 *_pow_recursion - returns the value of x raised to the power of y
 *
 *@x: the base
 *@y: the power
 *
 *Return: 0 if y is lower than 0 or the result of the operation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);

	return (x * _pow_recursion(x,y - 1));
}
