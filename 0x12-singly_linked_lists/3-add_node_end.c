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
 * @:head: The head node to append to
 * @str: The string to use as a node element
 *
 * Return: The address of the new node
