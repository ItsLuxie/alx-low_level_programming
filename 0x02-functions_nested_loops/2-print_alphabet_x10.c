#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase 10 times
 *
 */
void print_alphabet_x10(void)
{
	char alph = 'a';

	int count = 0;

	while (count <= 10)
	{
		while (alph <= 'z')
		{
			_putchar(alph);
			alph++;
		}
		count++;
	}
	_putchar('\n');
}
