#include "main.h"
/**
 * print_diagsums - prints the sum of dianals
 * @a: string
 * @size: size of string
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sd1 = 0, sd2 = 0;

	for (i = 0; i < n; i++)
	{
		sd1 += a[i][i];
		sd2 += a[i][size - i - 1];

		return (sd1, sd2);
	}
	return ('\0');
}
