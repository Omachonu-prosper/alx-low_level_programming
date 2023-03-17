#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list
 * @head: The head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next_head;

	while (current_node != NULL)
	{
		next_head = current_node->next;
		free(current_node);
		current_node = next_head;
	}
}
