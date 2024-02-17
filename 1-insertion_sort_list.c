#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **h, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*h = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

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

	for (index = (*list)->next; index != NULL; index = temp)
	{
		temp = index->next;
		insertnode = index->prev;
		while (insertnode != NULL && index->n < insertnode->n)
		{
			swap_nodes(list, &insertnode, index);
			print_list((const listint_t *)*list);
		}
	}
}
