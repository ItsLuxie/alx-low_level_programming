#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of dianals
 * @a: string
 * @size: size of string
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sd1 = 0;
	int sd2 = 0;

	for (i = 0; i < size; i++)
	{
		sd1 += a[i * size + i];
		sd2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sd1, sd2);
}
