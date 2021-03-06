#include "holberton.h"
#include <stdlib.h>
/**
 *alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 *@width: columns
 *@height: rows
 *
 *Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **strc;
	int r;
	int a;

	if (height <= 0 || width <= 0)
		return (NULL);
	strc = malloc(sizeof(int) * width);
	if (strc == NULL)
	{
		free(strc);
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		strc[r] = malloc(sizeof(int) * height);
		if (strc[r] == NULL)
		{
			while (r >= 0)
			{
			free(strc[r]);
			r--;
			return (NULL);
			}
			free(strc);
		}
		for (a = 0; a < width; a++)
		{
			strc[r][a] = 0;
		}
	}
	return (strc);
}
