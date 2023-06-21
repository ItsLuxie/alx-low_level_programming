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
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
	for (; n >= 98; n--)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		_putchar('\n');
	}
}
