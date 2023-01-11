#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguements of the program
 * @ac: The count of the arguements
 * @av: An array of the arguements
 *
 * Return: NULL if ac or av = NULL
 * NULL if fails
 * A pointer to the string of arguements on success
 */
char *argstostr(int ac, char **av)
{
	int i, j;
	char *arg_str;
	int arg_str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			arg_str_len += 1;
		}
	}

	arg_str = malloc(sizeof(char) * arg_str_len);
	if (arg_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(arg_str, av[i]);
		strcat(arg_str, "\n");
	}

	return (arg_str);
}
