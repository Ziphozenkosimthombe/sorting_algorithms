#include "sort.h"

void swap(int *i, int *y);
void max_heapify(int *array, size_t size, size_t base, size_t root);
void heap_sort(int *array, size_t size);

/**
 * swap - Swap two integers in an array.
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
 * max_heapify - Turn a binary tree into a complete binary heap.
 * @array: An array of integers representing a binary tree.
 * @size: The size of the array/tree.
 * @base: The index of the base row of the tree.
 * @root: The root node of the binary tree.
 */
void max_heapify(int *array, size_t size, size_t base, size_t root)
{
	size_t left, right, large;

	left = 2 * root + 1;
	right = 2 * root + 2;
	large = root;

	if (left < base && array[left] > array[large])
		large = left;
	if (right < base && array[right] > array[large])
		large = right;

	if (large != root)
	{
		swap(array + root, array + large);
		print_array(array, size);
		max_heapify(array, size, base, large);
	}
}

/**
 * heap_sort - Sort an array of integers in ascending order
 * @array: An array of integers.
 * @size: The size of the array.
 */
void heap_sort(int *array, size_t size)
{
	int a;

	if (array == NULL || size < 2)
		return;

	for (a = (size / 2) - 1; a >= 0; a--)
		max_heapify(array, size, size, a);

	for (a = size - 1; a > 0; a--)
	{
		swap(array, array + a);
		print_array(array, size);
		max_heapify(array, size, a, 0);
	}
}
