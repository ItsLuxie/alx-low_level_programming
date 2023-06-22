#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: prints 1 to 14, 10 times
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, count;

	for (count = 0; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(i / 10+ 48);
			_putchar(i % 10 + 48);
		}
		_putchar(10);
	}
}
