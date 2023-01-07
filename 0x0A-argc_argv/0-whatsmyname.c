#include <stdio.h>

/**
 * main - Prints the name of the program followed by a new line
 * @argc: The number of arguements passed to the program
 * @argv: An array containing the arguements passed to the program
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
