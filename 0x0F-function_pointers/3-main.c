#include "3-calc.h"

/**
 * main - Entry point
 * @argc: Number of arguements passed to the program
 * @argv: Array of arguements
 *
 * Return: Zero on sucessful run
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2, result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (strcmp(operator, "+") != 0 && 
			strcmp(operator, "-") != 0 &&
			strcmp(operator, "*") != 0 &&
			strcmp(operator, "/") != 0 &&
			strcmp(operator, "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((num2 == 0 && strcmp(operator, "/") == 0) ||
			(num2 == 0 && strcmp(operator, "%") == 0))
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}

