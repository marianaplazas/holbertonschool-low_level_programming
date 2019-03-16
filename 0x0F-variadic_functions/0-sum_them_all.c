#include "variadic_functions.h"
/**
 *sum_them_all - sum all the arguments
 *
 *@n: the arguments
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int a;

	va_start(list, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
