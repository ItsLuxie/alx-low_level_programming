#include "main.h"
#include <string.h>
/**
 * puts2 - prints each charactee in a string
 * @str: string to be printed
 */
void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
