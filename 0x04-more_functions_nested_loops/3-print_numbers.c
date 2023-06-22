#include "main.h"
/**
 * print_numbers - Entry point
 *
 * Description: prints number 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	if (i >= 0 && i <= 9)
	{
		_putchar(i + 48);
		i++;
	}
	_putchar(10);
}
