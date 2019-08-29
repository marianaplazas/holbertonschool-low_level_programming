#include "search_algos.h"
/**
 *binary_search - do a binary search without recursion
 *@array: pointer to the array
 *@size: the size of the array
 *@value: the value to looking
 *Return: the index where is the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t floor = 0, mid, roof = size - 1, counter;

	if (array == NULL)
		return (-1);
	while (floor <= roof)
	{
		printf("Searching in array: ");
		for (counter = floor; counter < roof; counter++)
			printf("%d, ", array[counter]);
		printf("%d\n", array[counter]);

		mid = floor + ((roof - floor) / 2);
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
			roof = mid;
		else
			floor = mid + 1;
	}
	return (-1);
}
