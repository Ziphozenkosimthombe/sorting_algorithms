#include "sort.h"

/**
 * swap - the two integers in the array will be swap.
 * @i: the first integer.
 * @y: the second integer.
 */
void swap(int *i, int *y)
{
	int temp;

	temp = *i;
	*i = *y;
	*y = temp;
}

/**
 * bubble_sort - will sort the array of the int in ascending order.
 * @array: the array of int to sort.
 * @size: the array size.
 */
void bubble_sort(int *array, size_t size)
{
	size_t a, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (a = 0; a < len - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swap(array + a, array + a + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
