#include <stdio.h>
#include "main.h"

/**
 * main - Call the fizz_buzz function
 *
 * Return: Always zero
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Print numbers from 0 to 100
 * print Fizz for multiples of three
 * print Buzz for multiples of five
 * pritn FizzBuzz for multiples of both five and three
 */
void fizz_buzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	printf("\n");
}
