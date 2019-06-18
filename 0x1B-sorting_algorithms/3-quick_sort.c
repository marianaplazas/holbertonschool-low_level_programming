#include "sort.h"
/**
 *quick_sort - sort an array with quick sort
 *@array: pointer to the array
 *@size: the size of of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	sort_this(array, 0, size - 1, size);
}
/**
 *sort_this - recursive function that calls partition and swap
 *@array: pointer to array
 *@initial: the initial position in the array
 *@final: the final number in the array
 *@size: the size of the array
 */
void sort_this(int *array, int initial, int final, size_t size)
{
	int sort;

	if (initial < final)
	{
		sort = part_this(array, initial, final, size);
		sort_this(array, initial, sort - 1, size);
		sort_this(array, sort, final, size);
	}
}
/**

 *part_this - function that makes the partition
 *@array: pointer to array
 *@inital: initial position in the array
 *@final: final number in the array
 *@size: size of the array
 */
int part_this(int *array, int initial, int final, size_t size)
{
	int pivot = array[final];
	int left = initial;
	int right, tmp;

	for (right = initial; right < final; right++)
	{
		if (array[right] <= pivot)
		{
			if (left != right)
			{
				swap_this(&array[left], &array[right]);
				print_array(array, size);
			}
			left++;
		}
	}
	if (left != final)
	{
		tmp = array[left];
		array[left] = array[final];
		array[final] = tmp;
		print_array(array, size);
	}
	return (left);
}

/**
 * swap_this - swap 
 * @a: the menor
 * @b: the higher
 */
void swap_this(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
