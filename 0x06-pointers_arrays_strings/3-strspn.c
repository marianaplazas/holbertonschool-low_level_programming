#include "holberton.h"
/**
 *_strspn - get the lenght
 *
 *@s: frist pointer
 *@accept: second
 *
 *Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	c = 0;
	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != 0; b++)
		{
			if (accept[b] == s[a])

			{
				c++;
				break;
			}
		}
		if (accept[a] == '\0')
			return (c);
	}
	return (c);
}
