#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: The head of the list
 * @n: The value to add
 *
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;

	current_node = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (current_node == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}

	while (current_node != NULL)
	{
		if (current_node->next == NULL)
		{
			new_node->prev = current_node;
			current_node->next = new_node;

			return (new_node);
		}

		current_node = current_node->next;
	}

	return (NULL);
}
