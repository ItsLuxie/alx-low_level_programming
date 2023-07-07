#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to string or array of char
 */
void _puts_recursion(char *s)
{
	char *p = s;

	if (*p != '\0')
	{
		_putchar(*p);
		p++;
		_puts_recursion(p);
	}
	else
	{
		_putchar('\n');
	}
}
