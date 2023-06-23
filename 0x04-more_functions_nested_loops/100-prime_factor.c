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
	int n = 612852475143;

	int i, r;

	i = 0;

	while (n != 0)
	{
		r = n % 10;

		n = n / 10;

		if (r == 2 || r == 3 || r == 5 || r == 7)
		{
			if (r > i)
				i = r;
			else
				printf( "%d\n", i);
		}
	}
}
