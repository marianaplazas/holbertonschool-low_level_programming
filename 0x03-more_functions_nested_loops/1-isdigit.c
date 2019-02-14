#include "holberton.h"
/**
 *_isdigit - evaluate if the variable is a number
 *
 *@c: variable to evaluate
 *
 *Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
