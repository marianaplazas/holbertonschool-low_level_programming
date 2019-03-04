#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "holberton.h"
/**
 * main - multiplies two int.
 *
 * @argc: Number of arguments.
 * @argv: Array containing the program command line arguments.
 *
 * Return: 0 if is success
 */
int main(int argc, char *argv[])
{
	int final;
	int one;
	int two;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		one = atoi(argv[1]);
		two = atoi(argv[2]);

		final = one * two;
		printf("%d\n", final);
	}
	return (0);
}
