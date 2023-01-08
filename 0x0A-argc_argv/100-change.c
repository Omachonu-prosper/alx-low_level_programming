#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins
 * to make change for an amount of money
 * @argc: The number of arguements
 * @argv: An array store for all arguements
 *
 * Return: 1 if incorrect number of arguements is passed
 * 0 if no errors occur
 */
int main(int argc, char **argv)
{
	int arr_cents[] = {25, 10, 5, 2, 1};
	int min_cents = 0;
	int cents, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", min_cents);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		if (cents % arr_cents[i] == 0)
		{
			min_cents += cents / arr_cents[i];
			printf("%d\n", min_cents);
			return (0);
		}
		else if (cents / arr_cents[i] < 0)
		{
			continue;
		}
		else
		{
			min_cents += cents / arr_cents[i];
			cents = cents % arr_cents[i];
		}
	}

	return (0);
}
