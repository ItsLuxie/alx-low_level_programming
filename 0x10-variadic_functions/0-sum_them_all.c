#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sums all integers added
 * @n: the count
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result = 0;

	va_list(mysum);

	va_start(mysum, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(mysum, int);
	}
	va_end(mysum);

	return (result);
}
