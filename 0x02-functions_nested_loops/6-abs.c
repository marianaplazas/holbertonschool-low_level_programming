#include "holberton.h"
/**
 *_abs - show the absolute value of an integer
 *
 *@r:number to evaluate
 *
 *Return: the absolute value
 */
int _abs(int r)
{
	return (r < 0 ? ((r * -1)) : r);
}
