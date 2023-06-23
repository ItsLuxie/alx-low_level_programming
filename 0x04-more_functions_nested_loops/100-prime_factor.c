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
	int i, r;
	long int n = 612852475143;
	i = 0;

	while (n != 0)
	{
		r = n % 10;
		n = n / 10;

		if (r == 2 || r == 3 || r == 5 || r == 7)
		{
			if (r > i)
			{
				i = r;

				if (r == 7)
				{
					printf( "%d\n", i);
					break;
				}
			}
		}
	}
	return (0);
}
