#include "lists.h"

/**
 * list_len - Gets the number of elements in a linked list
 * @h: The list to find its number of elements
 *
 * Return: The number of elements in the given linked list
 */
size_t list_len(const list_t *h)
{
	size_t no_in_list;

	no_in_list = 0;
	while (h != NULL)
	{
		no_in_list++;
		h = h->next;
	}

	return (no_in_list);
}
