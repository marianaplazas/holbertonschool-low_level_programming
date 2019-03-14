#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 *
 * @name: the name to ptint
 * @f: pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return(0);
	f(name);
}
