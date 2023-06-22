#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Description: prints number 0 to 9
 *
 * Return: Always a number
 */
void print_numbers(void)
{
	int i;

	if (i >= 0 && i <= 9)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
