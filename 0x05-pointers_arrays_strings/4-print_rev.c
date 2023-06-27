#include "main.h"
#include <string.h>
/**
 * print_rev - prints a reverse string
 * @str: string to be printed
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(str[s]);
	}
	_putchar('\n');
}
