#include <stdio.h>
/**
 * main - count the arguments
 *
 * @argc: count of arguments to main
 * @argv: the pointer
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
