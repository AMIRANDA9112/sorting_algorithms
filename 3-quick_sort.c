#include "sort.h"

/**
 * quick_sort - sort a array with quick sort scheme
 * @array: array to sort
 * @size: size
 */
void quick_sort(int *array, size_t size)
{
	sort_array(array, 0, size - 1, size);
}

/**
 * sort_array - recursive function
 * @array: to sort
 * @size:  size
 * @init: first position on array
 * @end: last position in array
 */
void sort_array(int *array, int init, int end, size_t size)
{
	int pivot;

	if (init < end)
	{
		pivot = partition(array, init, end, size);
		sort_array(array, init, pivot - 1, size);
		sort_array(array, pivot + 1, end, size);
	}
}

/**
 * partition - partition and scale
 * @array: to partition
 * @size: size
 * @init: first position on array
 * @end: last position in array
 * Return: return the position of i (the new pivot)
 */
int partition(int *array, int init, int end, size_t size)
{
	int pivot, i, j, temp;

	pivot = array[end];

	i = init - 1;
	for (j = init; j < end; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
	i++;
	if (i != j)
	{
		temp = array[i];
		array[i] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (i);
}
