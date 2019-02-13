#include "holberton.h"
/**
 *_islower - check if the character is lowercase
 *
 *@c: the character
 *
 *Return: 0 or 1
 */
int _islower(int c)
{

	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
