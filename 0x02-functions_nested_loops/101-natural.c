#include  <stdio.h>
/**
 * main - Entry point
 * multiples of 3 and 5
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, sum;

	unsigned long int sum3, sum5;

	sum = 0;
	sum3 = 0;
	sum5 = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0)
		{
			sum3 = sum3 + n;
		}
		else if ((n % 5) == 0)
		{
			sum5 = sum5 + n;
		}
	}
	sum = sum3 + sum5;
	printf("%d\n", sum);
	return (0);
}
