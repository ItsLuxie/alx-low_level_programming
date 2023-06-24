#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers 1 to 10
 * prints fizzbuzz
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
		else if (i == 0)
			printf("Buzz");
	}
	printf("\n");

	return (0);
}
