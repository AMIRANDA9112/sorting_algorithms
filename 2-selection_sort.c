#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, m, n;

	if (array == NULL || size < 2)
		return;

	for (i = 0, m = 0; i < size; i++)
	{
		m = i;

		for (j = i + 1; j < size; j++)

		{
			if (array[j] < array[m])
			{
				m = j;
			}

		}
		if (m != i)
		{
			n = array[i];
			array[i] = array[m];
			array[m] = n;
			print_array(array, size);
		}
	}
}
