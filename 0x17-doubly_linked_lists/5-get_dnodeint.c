#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a dlistint_t linked list
 * @head: The head node of the list
 * @index: The index to return a node at
 *
 * Return: The node at the given index;
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int index_counter = 0;

	while (current_node != NULL)
	{
		if (index_counter == index)
			return (current_node);

		index_counter++;
		current_node = current_node->next;

		if (index_counter > index)
			return (NULL);
	}

	return (NULL);
}
