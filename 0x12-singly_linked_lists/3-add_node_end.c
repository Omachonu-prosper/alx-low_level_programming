#include "lists.h"

/**
 * _strlen - Gets the length of a string
 * @str: The string to work with
 *
 * Return: The length of the string
 */
unsigned int _strlen(const char *str)
{
	unsigned int str_len, i;

	str_len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}

	return (str_len);
}

/**
 * add_node_end - Add a new node to the end of a list
 * @head: The head node to append to
 * @str: The string to use as a node element
 *
 * Return: The address of the new node
 * NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	tmp = *head;
	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
