#include "holberton.h"
#include <stdlib.h>
/**
 *_strdup - copy string
 *
 *@str: string
 *
 *Return: the pointer with string
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	a++;
	s = malloc(sizeof(char) * a);
	if (s == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		s[b] = str[b];
	return (s);
}
