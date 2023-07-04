#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of dianals
 * @a: string
 * @size: size of string
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sd1 = 0, sd2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sd1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sd2 += a[i];

		printf("%d, %d\n", sd1, sd2);
	}
	return ('\0');
}
