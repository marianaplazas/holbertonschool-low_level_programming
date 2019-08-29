#include "search_algos.h"
/**
 *linear_search - linear search
 *@array: pointer to the array
 *@size: the size
 *@value: the value for search
 *Return: the index where the value is
 */
int linear_search(int *array, size_t size, int value)
{
	size_t counter;

	if (array == NULL)
		return (-1);
	for (counter = 0; counter < size; counter++)
	{
		printf("Value checked array[%ld] = [%d]\n", counter, array[counter]);
		if (array[counter] == value)
			return (counter);
	}
	return (-1);
}
