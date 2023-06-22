#include <stdio.h>

/**
* main - finds and prints the sum of the even-valued terms
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	unsigned long int first, second, next, sum;

	first = 1;
	second = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (second < 4000000 && (second % 2) == 0)
		{
			sum = sum + first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%lu\n", sum);
	return (0);
}
