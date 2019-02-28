#include "holberton.h"
/**
 *factorial - shows the factorial of n
 *
 *@n: the number for calculated the factorial
 *
 *Return: -1 if is error and 1 if is 0
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
