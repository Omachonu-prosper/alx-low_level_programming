#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * strtow - Splits a string into words
 * @str: The string
 *
 * Return: NULL if str is NULL or empty string
 * NULL if memory allocation fails
 * Pointer to array of words on success
 */
char **strtow(char *str)
{
	char **arr_words;
	int word_count = 0;
	char *word;
	int i;
	printf("Word count: %d", word_count);
	if (str == NULL || *str == '\0')
		return (NULL);
	printf("Word count: %d", word_count);
	word = strtok(str, " ");
	while (word != NULL)
	{
		printf("Word count: %d", word_count);
		word_count += 1;
		word = strtok(NULL, " ");
	}
	printf("Word count: %d", word_count);
	arr_words = malloc(sizeof(char) * word_count);
	if (arr_words == NULL)
		return (NULL);

	word = strtok(str, " ");
	for (i = 0; i < word_count && word != NULL ; i++)
	{
		arr_words[i] = word;
		word = strtok(NULL, " ");
	}

	return (arr_words);
}
