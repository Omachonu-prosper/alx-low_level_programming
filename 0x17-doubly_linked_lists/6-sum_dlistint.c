#include "lists.h"

/**
 * sum_dlistint - Sums all the data (n) of a dlistint_t linked list
 * @head: The head od the list
 *
 * Return: The sum of the date in the list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int n_sum = 0;

	while (current_node != NULL)
	{
		n_sum += current_node->n;
		current_node = current_node->next;
	}

	return (n_sum);
}
