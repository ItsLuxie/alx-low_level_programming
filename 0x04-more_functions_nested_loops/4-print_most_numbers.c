#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Description: print numbers except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if ((j == 2) || (j == 4))
		{
			continue;
		}
		_putchar(j + 48);
	}
	_putchar(10);
}
