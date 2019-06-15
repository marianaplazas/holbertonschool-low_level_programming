#include "sort.h"
/**
 *quick_sort - sort a array with Quick sort algorithm
 *@array: pointer to the array
 *@size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot = 0, antp = 0, last = size - 1, first = 0;
	
	pivot = sort_this(array, first, last, size);
	print_array(array, size);
	printf("%lu\n", pivot);
	pivot = sort_this(array, pivot + 1, last, size);
	print_array(array, size);
	printf("%lu\n", pivot);
	antp = pivot;
	pivot = sort_this(array, pivot + 1, last, size);
	if (pivot == antp)
		last--;
	else
	{
		print_array(array, size);
		printf("%lu\n", pivot);
	}
	antp = pivot;
	pivot = sort_this(array, pivot + 1, last, size);
	if (pivot == antp)
		last--;
	else
	{
		print_array(array, size);
		printf("%lu\n", pivot);
	}
	antp = pivot;
	pivot = sort_this(array, pivot + 1, last, size);
	if (pivot == antp)
		last--;
	else
	{
		print_array(array, size);
		printf("%lu\n", pivot);
	}
	antp = pivot;
	pivot = sort_this(array, pivot + 1, last, size);
	if (pivot == antp)
		last--;
	else
	{
		print_array(array, size);
		printf("%lu\n", pivot);
	}

}

int sort_this(int *array, size_t first, size_t last, size_t size)
{
	size_t i = first, j = first, min = 0, k = 0;
	int aux = 0, aux2 = 0;

	aux = array[last];
	while (i < last)
	{
		if (array[i] < aux)
			min++;
		i++;
	}
	if (min == last - first)
		return (first - 1);
	i = first;
	j = first;
	k = 0;
	while (k != min)
	{
		if (array[j] < aux)
		{
			if (array[i] != array[j])
			{
				aux2 = array[i];
				array[i] = array[j];
				array[j] = aux2;
				print_array(array, size);
			}
			k++;
			i++;
		}
		j++;
	}
	aux2 = array[first + min];
	array[first + min] = aux;
	array[last] = aux2;
	return first + min;
}
