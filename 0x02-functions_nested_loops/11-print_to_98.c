#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from n number to 98
 * @n: number
 * Return: any number
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for(; n >= 98; n--)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
