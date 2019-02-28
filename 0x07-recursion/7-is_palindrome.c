#include "holberton.h"
/**
 *is_palindrome - evaluate if the string is palindrome
 *
 *@s: the string
 *
 *Return: 1 if is palindrome or 0 if isn't
 */
int is_palindrome(char *s)
{
	char a;
	char b;

	if (*s != '\0')
	{
		a = *s;
		is_palindrome(s + 1);
			b = *s;
	}
	if (a == b)
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
