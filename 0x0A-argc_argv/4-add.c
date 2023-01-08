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
int main(int argc, char *argv[])
{
	int i;
	int total = 0;
	
	printf("Just before the for loop\n");
	for (i = 1; i < argc; i++)
	{
		printf("Just before if statement\n");
		if (!isdigit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		total += atoi(argv[i]);
	}

	printf("%d\n", total);
	return (0);
}
