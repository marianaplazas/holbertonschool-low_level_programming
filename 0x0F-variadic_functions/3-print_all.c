#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_all - print all formats
 *
 *@format: the format
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int a = 0;
	unsigned int b = 0;
	char *c;

	va_start(list, format);
	while (format && format[a] != '\0')
	{
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%i", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			c = va_arg(list, char *);
			if (c != NULL)
			{
				printf("%s", c);
				break;
			}
			printf("%p", c);
			break;
		default:
			b = 1;
			break;
		}
		if (format[a + 1] != '\0' && b == 0)
			printf(", ");
		b = 0;
		a++;
	}
	printf("\n");
	va_end(list);
}
