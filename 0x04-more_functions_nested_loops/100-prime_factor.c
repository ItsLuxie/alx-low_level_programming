#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints largest of the prime;i is for largest
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long int i, n = 612852475143;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n = n / 10;
			i--;
		}
	}
	printf("%lu\n", n);

	return (0);
}
