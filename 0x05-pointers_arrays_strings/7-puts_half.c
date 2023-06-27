#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	unsigned int i = ((strlen(str) - 1) / 2) + 1;

	if (strlen(str) % 2 == 0)
		i = strlen(str) / 2;

	for (; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


