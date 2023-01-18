#include "function_pointers.h"

/**
 * print_name - Print a name with any format passed
 * @name: The persons name
 * @f: The function that will print based on a specific format
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	
	if (!name)
		return;

	f(name);
}
