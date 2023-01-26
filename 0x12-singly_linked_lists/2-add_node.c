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
 * add_node - Add a new node at the begining of a linked list
 * @head: The location of the previous head node
 * @str: The string to be used as the elemeof the list
 *
 * Return: The address of the new element
 * NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
