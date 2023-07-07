#include "main.h"
/**
 * sr - func name
 * @n: func arg 1
 * @c: func arg 2
 * Return: int
 */
int sr(int n, int c)
{
	if ((c * c) == n)
		return (c);
	if (c > n)
		return (-1);
	return (sr(n, c + 1));
}
/**
 * _sqrt_recursion - squareroot
 * @n: number
 * Return: 0 success
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
		i = 1;
	else
		i = 2;
	return (sr(n, i));
}
