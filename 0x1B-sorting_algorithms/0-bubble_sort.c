#include "sort.h"
/**
 *bubble_sort - Bubble sort algorithm
 *@array: array of integers
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t a = 0;
	int aux = 0;
	int i;

	if (array == NULL || size == 0)
		return;
	while (a < size)
	{
		for (i = 0; array[i + 1]; i++)
		{
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
			}
		}
		a++;
	}
}
