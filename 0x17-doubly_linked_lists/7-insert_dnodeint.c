#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: The head of the list
 * @idx: The index of the list where the new node should be added
 * @n: The value of the new node
 *
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = (*h);
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int idx_counter = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (current_node != NULL)
	{
		if (idx_counter == idx)
		{
			new_node->next = current_node;
			if (current_node->prev != NULL)
			{
				new_node->prev = current_node->prev;
				current_node->prev->next = new_node;
			}
			current_node->prev = new_node;

			return (new_node);
		}

		idx_counter++;
		current_node = current_node->next;

		if (idx_counter > idx)
			return (NULL);
	}

	return (NULL);
}
