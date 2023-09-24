#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

#define UP 0
#define DOWN 1

/**
 * enum bool - Boolean values of the Enumeration
 * @false: Equal to 0.
 * @true: Equals to 1.
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*use them to print our functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/*algorithms*/
void bubble_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void shell_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif /*SORT_H*/
