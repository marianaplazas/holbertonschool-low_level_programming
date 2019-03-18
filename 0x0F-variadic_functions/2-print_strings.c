#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_strings - print strings
 *
 *@separator: the space
 *@n:number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int a;

	char *b;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		b = va_arg(list, char *);
		if (b == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", b);
		}
		if (a < n - 1)
		{
			if (separator)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
