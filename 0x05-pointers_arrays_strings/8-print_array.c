#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_array - prints array
 * @a: array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
