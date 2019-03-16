#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - print all numbers
 *
 *@separator: pointer
 *@n: number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list list;

	va_start(list, n);
	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(list, int));
		if (a != (a - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
