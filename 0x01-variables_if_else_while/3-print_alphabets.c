#include <stdio.h>

/**
 *main - start the function
 *
 *Return: 0 if is sucess
 */

int main(void)
{
	char az;

	for (az = 97 ; az < 123 ; az++)
		putchar(az);
	for (az = 65 ; az < 91 ; az++)
		putchar(az);

	putchar('\n');
	return (0);
}
