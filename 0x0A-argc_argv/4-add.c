#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 * @argc: The nmber of arguements
 * @argv: Array of the arguements
 *
 * Return: 1 if an arguement passed is not a digit
 * 0 if no errors occur
 */
int main(int argc, char **argv)
{
	int i;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		if (isdigit(*argv[i]) != 0)
		{
			total += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", total);
	return (0);
}
