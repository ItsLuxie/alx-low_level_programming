#include "main.h"
/**
 * *print_alphabet_x10 - prints all alphabets in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	int count = 1;

	for (; count <= 10; count++)
	{
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
	}
	_putchar('\n');
}
