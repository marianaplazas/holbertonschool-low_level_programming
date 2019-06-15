#include "sort.h"
/**
 *quick_sort - sort a array with Quick sort algorithm
 *@array: pointer to the array
 *@size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	size_t antp = 0, last = size - 1, first = 0;
	size_t conf = 0, truth = 1;
	int *pivot;

	pivot = sort_this(array, first, last, size);
	print_array(array, size);
	printf("%lu\n", pivot);

	while(truth != 0)
	{
		if (pivot[0] > 0)
		{
			antp = pivot[2];
			pivot = sort_this(array, first, pivot[2] - 1, size);
			if (pivot[2] == antp)
				first++;
			else
			{
				print_array(array, size);
				printf("%lu\n", pivot[2]);
			}
			continue;
		}
		if (pivot[1] > 0)
		{
			antp = pivot[2];
			pivot = sort_this(array, pivot[2] + 1, last, size);
			if (pivot[2] == antp)
				last--;
			else
			{
				print_array(array, size);
				printf("%lu\n", pivot[2]);
			}
		}
		for (conf = 0; conf <= size; conf++)
		{
			if (conf == size)
				return;
			if (array[conf] > array[conf + 1])
				break;
		}
	}

}

int* sort_this(int *array, size_t first, size_t last, size_t size)
{
	size_t i = first, j = first, min = 0, grt = 0, k = 0;
	int aux = 0, aux2 = 0;
	int bus[] = {min, grt, first - 1};
	
	aux = array[last];
	while (i < last)
	{
		if (array[i] < aux)
			min++;
		else
			grt++;
		i++;
	}
	if (min == last - first)
	{
		bus[0] = min;
		bus[1] = grt;
		bus[2] = first - 1;
		return (bus);
	}
	if (grt == last - first)
	{
		bus[0] = min;
		bus[1] = grt;
		bus[2] = last + 1;
		return (bus);
	}
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
	bus[0] = min;
	bus[1] = grt;
	bus[2] = first + min;
	return (bus);
}
