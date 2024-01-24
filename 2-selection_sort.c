#include "sort.h"

/**
 * selection_sort - func that sorts using selection sort algorithm
 *
 * @array: array to be sorted
 * @size: size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, forward, backward;
	int temp;

	if (!array || !size)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (backward = size - 1, forward = i + 1; backward > i; backward--)
		{
			if (array[backward] < array[forward])
				forward = backward;
		}
		if (array[i] > array[forward])
		{
			temp = array[i];
			array[i] = array[forward];
			array[forward] = temp;
			print_array(array, size);
		}
	}
}
