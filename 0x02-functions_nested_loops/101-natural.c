#include  <stdio.h>
/**
 * main - Entry point
 * multiples of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 3; n < 1024; n + 3)
	{
		for (n = 5; n < 1024; n + 5)
		{
			sum = sum + n;
			printf("%d", sum);
		}
	}
	return (0);
}
