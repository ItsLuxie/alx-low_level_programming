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
	int c;

	if (c >= '0' && c <= '9')
	{
		_putchar(c + '0');
	}
	_putchar('\n');
}
