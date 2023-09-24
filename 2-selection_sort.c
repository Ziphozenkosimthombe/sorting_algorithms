#include "sort.h"

/**
 * swap - integers in an array will be swap.
 * @i: The first int to swap.
 * @y: The second int to swap.
 */
void swap(int *i, int *y)
{
	int temp;

	temp = *i;
	*i = *y;
	*y = temp;
}

/**
 * selection_sort - array of integers will be sorted
 * in ascending order
 * using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t a, j;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		min = array + a;
		for (j = a + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + a) != min)
		{
			swap(array + a, min);
			print_array(array, size);
		}
	}
}
