#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 if is success
 */

int main(void)
{
        int a;

        int z;

        a = 48;

        z = 97;

        while (a < 58)
        {
                putchar(a);
                a++;
        }

        while (z < 103)
        {
                putchar(z);
                z++;
        }
        putchar('\n');
        return (0);
}
