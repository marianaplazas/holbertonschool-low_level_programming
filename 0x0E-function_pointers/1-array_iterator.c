#include "function_pointers.h"
/**
 * array_iterator - executes a function with all parameters
 *
 * @array: the array
 * @size: the size of array
 * @action: the pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
