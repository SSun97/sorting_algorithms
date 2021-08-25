#include "sort.h"

/**
 * swap - swap two integers
 * @xp: first integer
 * @yp: second integer
 * Return: no return
 */

void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - sort the array
 * @array: provide array
 * @size: the length of the array
 * Return: no return
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;

		for (j = i + 1; j < size; j++)
			if (array[j] < array[min_idx])
				min_idx = j;

		swap(&array[min_idx], &array[i]);

		if (min_idx != i)
			print_array(array, size);
	}
}
