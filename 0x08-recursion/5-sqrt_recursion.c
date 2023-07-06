#include "main.h"
/**
 * _sqrt_recursion - squareroot
 * @n: number
 * Return: 0 success
 */
int _sqrt_recursion(int n)
{
	int i;
	int j = 0;

	i = n / 2;

	if (n % 10 == 2 || n % 10 == 3 || n % 10 == 7 || n % 10 == 8)
		return (-1);
	while (i != j)
	{
		j = i;
		i = (n / j + j) / 2;
	}
	return (i);
}
