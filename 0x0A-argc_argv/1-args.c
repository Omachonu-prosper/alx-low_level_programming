#include <stdio.h>

/**
 * main - Prints the number of arguements passed to it
 * @argc: The number of arguements passed to the program
 * @argv: An array containing the arguements passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
