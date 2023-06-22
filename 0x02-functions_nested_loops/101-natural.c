#include  <stdio.h>
/**
 * multiples of 3 and 5
 *Return: always a number
 */
int main(void)
{
	int n, sum;

	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			sum = sum + n;
		}
	}
	return (sum);
}
