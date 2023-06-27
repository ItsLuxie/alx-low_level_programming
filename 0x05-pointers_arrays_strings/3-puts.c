#include "main.h"
#include <string.h>
/**
 * _puts - prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	unsigned int ch;

	for (ch = 0; ch < strlen(str); ch++)
	{
		_putchar(str[ch]);
	}
	_putchar('\n');
}
