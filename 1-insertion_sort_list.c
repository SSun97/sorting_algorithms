#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 * @list: Doubly linked list to sort
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *pre, *nex, *temp;

	if (list == NULL || *list == NULL)
		return;

	pre = *list;

	if (pre->next)
		nex = pre->next;

	while (nex)
	{
		pre = nex->prev;
		temp = pre;

		swap(pre, nex, list);

		if (temp->n > nex->n)
			nex = temp->next;
		else if (temp->next)
			nex = temp->next->next;
		else
			nex = temp->next;
	}
}

/**
 * swap - swap the node
 * @pre: last node
 * @nex: next node
 * @list: linked list to be sorted
 */
void swap(listint_t *pre, listint_t *nex, listint_t **list)
{
	while (pre->n > nex->n)
	{
		pre->next = nex->next;
		nex->prev = pre->prev;
		if (pre->prev)
			pre->prev->next = nex;
		if (nex->next)
			nex->next->prev = pre;
		nex->next = pre;
		pre->prev = nex;
		if (nex->prev)
			pre = nex->prev;
		else
		{
			*list = nex;
			print_list(*list);
			break;
		}
		print_list(*list);
	}
}

