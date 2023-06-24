#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints numbers 1 to 100, prints Fizz for multiples of 3 prints Buzz for multiples of 5 and FizzBuzz for multiples of both 5 & 3
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
