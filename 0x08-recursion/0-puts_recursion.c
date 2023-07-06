#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to string or array of char
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
	}
}
