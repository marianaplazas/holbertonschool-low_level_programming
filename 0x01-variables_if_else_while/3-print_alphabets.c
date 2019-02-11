#include <stidio.h>

/**
 *main start
 *
 *Return =0 if is sucess
 */

int main(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
		putchar(az);
	for (az = 'A' ; az <= 'Z' ; az++)
		putchar(az);

	putchar('\n');
	return (0);
}
