#include <stdio.h>
/**
 * main - print the name.
 * @argc: Number of command line arguments.
 * @argv: Array containing the program command line arguments.
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
