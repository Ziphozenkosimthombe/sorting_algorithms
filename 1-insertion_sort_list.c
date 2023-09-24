#include "sort.h"

/**
 * swap - will swap the 2 nodes in listint_t doubly-linked list.
 * @h: pointer to head of the doubly linked list.
 * @n1: the first node pointer to swap.
 * @n2: second node to swap.
 */
void swap(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - the doubly linklist of integer,
 * will be sort using insertion sort algorithm.
 * @list: pointer to the head of doubly linked list of integer.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (iter = (*list)->next; iter != NULL; iter = temp)
	{
		temp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
