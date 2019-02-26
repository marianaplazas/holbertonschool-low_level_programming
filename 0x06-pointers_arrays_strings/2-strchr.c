#include "holberton.h"
/**
 *_strchr - put a character in a string
 *
 *@s: the pointer to the string
 *@c: the char to put it
 *
 *Return: the pointer or null
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
			break;
		}
	}
	return ('\0');
}
