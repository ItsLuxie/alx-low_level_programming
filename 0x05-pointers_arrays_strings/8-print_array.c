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

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
