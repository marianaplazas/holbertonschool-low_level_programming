#include <stdio.h>
/**
 * main - print all arguments
 *
 * @argc: argument count
 * @argv: argument variables
 *
 * Return: 0 if is success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	printf("%s\n", argv[a]);
	return (0);
}
