#include <stdio.h>
#include "main.h"
/**
 * print_sign -checks signs i.e - when negative + when positive and 0 when zero
 * @n: number
 * Return: always a number
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

