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
		while ((number % i == 0) && (number != i))
		{
			number /= i;
		}
	}
	printf("%lu\n", number);

	return (0);
}
