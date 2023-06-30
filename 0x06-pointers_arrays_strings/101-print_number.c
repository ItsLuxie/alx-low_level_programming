#include "main.h"

/**
 * print_number - Entry point
 *
 * @i: interger to be printed
 *
 * Return: void
*/

void print_number(int i)
{
	unsigned int n = i;

	if (i < 0)
	{
		_putchar(45);
		n = -n;
	}

	if ((n / 10) > 0)
		print_number(n / 10);

	_putchar((n % 10) + 48);
}
