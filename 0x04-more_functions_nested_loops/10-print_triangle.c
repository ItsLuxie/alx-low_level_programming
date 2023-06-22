#include "main.h"
/**
 * print_triangle - Entry point
 *
 * @size: size to be printed
 *
 * Description: prints triangle using #
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('#');
		size--;
	}
	_putchar('\n');
}
