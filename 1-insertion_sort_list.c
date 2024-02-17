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

	for (index = (*list)->next; index != NULL; index = tmp)
	{
		temp = index->next;
		insertnode = index->prev;
		while (insertnode != NULL && index->n < insertnode->n)
		{
			insertnode->next = index->next;	
			print_list((const listint_t *)*list);
		}
	}
}
