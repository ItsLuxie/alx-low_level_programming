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
	int i, j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= size; ++i)
		{
			for (j = i; j < size; ++j)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
}
