#include "sort.h"

/**
 * swap - the two integers will be swap
 * in an array.
 * @i: The first integer to swap.
 * @y: The second integer to swap.
 */
void swap(int *i, int *y)
{
	int temp;

	temp = *i;
	*i = *y;
	*y = temp;
}

/**
 * shell_sort - Sort an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap, a, j;

	if (array == NULL || size < 2)
		return;

	for (gap = 1; gap < (size / 3);)
		gap = gap * 3 + 1;

	for (; gap >= 1; gap /= 3)
	{
		for (a = gap; a < size; a++)
		{
			j = a;
			while (j >= gap && array[j - gap] > array[j])
			{
				swap(array + j, array + (j - gap));
				j -= gap;
			}
		}
		print_array(array, size);
	}
}
