#include "holberton.h"
/**
 *_isupper - evaluates if a character is uppercase
 *
 *@c: character to evaluate
 *
 *Return: 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
