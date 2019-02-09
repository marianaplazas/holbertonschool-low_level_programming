#include <stdio.h>

/**
 *main stars the program
 *
 *value return 0 if is success
 */

int main(void)
{
	char az ='a';

	while (az <= 'z')
	{
		putchar(az);
		az++;
	}
	putchar ('\n');
	return(0);
}
