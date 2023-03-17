#include "lists.h"

/**
 * dlistint_len - Prints all elements of a dlistint_t list
 * @h: Head node of the dlist
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	int no_of_nodes = 0;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		no_of_nodes++;
	}

	return (no_of_nodes);
}
