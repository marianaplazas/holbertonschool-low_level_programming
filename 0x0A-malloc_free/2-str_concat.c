#include "holberton.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 *
 *@s1: string one
 *@s2: string two
 *
 *Return: pointer with the new memory space
 */
char *str_concat(char *s1, char *s2)
{
	char *new_string;
	int a, b;
	int counter = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	new_string = malloc(sizeof(char) * (a + b) + 1);
	if (new_string == NULL)
		return (NULL);
	while (counter < a + b + 1)
	{
		if (counter < a)
			new_string[counter] = s1[counter];
		else
			new_string[counter] = s2[counter - a];
		counter++;
	}
	new_string[counter] = '\0';
	return (new_string);
}
