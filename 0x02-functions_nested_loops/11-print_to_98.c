#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from n number to 98
 * @n: number
 * Return: any number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d, ", n);
		}
		n++;
	}
	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d\n", n);
			break;
		}
		n--;
	}
	printf("\n");
}
