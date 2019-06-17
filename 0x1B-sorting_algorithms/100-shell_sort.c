#include "sort.h"
/**
 *shell_sort - sort array with Shell sort algorithm
 *@array: pointer to the array
 *@size: the size of the array
 */
void shell_sort(int *array, size_t size)
{
	int aux = 0;
	size_t  i = 0, j = 0, gap = 1;

	if (array == NULL || size == 0)
		return;
	while (gap * 3 + 1 < size)
		gap = gap * 3 + 1;
	for (j = i + gap; gap != 0; gap = (gap - 1) / 3, i = 0, j = i + gap)
	{
		while (j < size)
		{
			if (array[i] > array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				i = 0;
				j = i + gap;
				continue;
			}
			i += 1, j = i + gap;
		}
		print_array(array, size);
	}
}
