#include <stdio.h>

/**
 *main start
 *
 *Return =0 if is sucess
 */

int main(void)
{
	int a;
	a = 97;

        while (a < 123 && a != 101 && a != 113)
	{
                putchar(a);
		putchar('\n');
		a++;
	}
        return (0);
}
