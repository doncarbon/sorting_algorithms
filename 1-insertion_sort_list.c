#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of ints in ascending order
 * using the Insertion sort algorithm.
 * @list: the doubly linked list of ints to sort.
 *
 * Return: Nothing (void)
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *insertnode, *index;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		temp = index->next;
		insertnode = index->prev;
		while (insertnode != NULL && index->n < insertnode->n)
		{
			print_list((const listint_t *)*list);
		}
	}
}
