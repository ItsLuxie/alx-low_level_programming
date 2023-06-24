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

	for (i = 3; i < 782849; i += 2)
	{
		while ((n % i == 0) && (n != i))
		{
			n /= i;
		}
	}
	printf("%lu\n", n);

	return (0);
}
