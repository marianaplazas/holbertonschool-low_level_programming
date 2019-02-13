#include "holberton.h"
/**
 *_isalpha - evaluate if the character is alphanumeric
 *
 *@c: character to evaluate
 *
 *Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 90) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
