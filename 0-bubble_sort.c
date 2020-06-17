#include "sort.h"
/**
 * bubble_sort - bubble_sort
 * @array: array to sort
 * @size: size of output
 */
void bubble_sort(int *array, size_t size)
{
	int buffer;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				buffer = array[j];
				array[j] = array[j + 1];
				array[j + 1] = buffer;
				print_array(array, size);
				return;
			}
		}
	}
}
