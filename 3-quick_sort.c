#include "sort.h"

/**
 * swap_q - sway two integers in an array
 * @x: integer
 * @y: integer
 * Return: no return
 */

void swap_q(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * Partition - split the array
 * @A: the original array
 * @p: index 0
 * @r: index of last integer
 * @size: the size of orgianl array
 * Return: no return
 */

int Partition(int *A, int p, int r, size_t size)
{
	int x, i, j;

	x = A[r];
	i = p - 1;

	for (j = p; j <= r - 1; j++)
	{
		if (A[j] <= x)
		{
			i++;
			swap_q(&A[i], &A[j]);
			if (j != i)
				print_array(A, size);
		}
	}

	swap_q(&A[i + 1], &A[r]);
	if (i + 1 != r)
		print_array(A, size);

	return (i + 1);
}

/**
 * QuickSort - quick sort the arry with given size
 * @A: the given array
 * @p: index 0
 * @r: index of last integer
 * @size: the size of orgianl array
 * Return: no return
 */

void QuickSort(int *A, int p, int r, size_t size)
{
	int q;

	if (p < r)
	{
		q = Partition(A, p, r, size);

		QuickSort(A, p, q - 1, size);
		QuickSort(A, q + 1, r, size);
	}
}


/**
 * quick_sort - sort the array
 * @array: array
 * @size: size of array
 * Return: no return
 */

void quick_sort(int *array, size_t size)
{
	int p = 0;
	int r = size - 1;

	QuickSort(array, p, r, size);

}
