#include <stdio.h>

/**
 * main - Prints all arguements it receives
 * @argc: The number of arguements passed
 * @argv: An array containing all arguements passed
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
