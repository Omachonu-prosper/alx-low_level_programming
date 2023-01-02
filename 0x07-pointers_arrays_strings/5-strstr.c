#include "main.h"
#include <string.h>

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to search for
 *
 * Return: A pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
