#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoding system
 * @n: letters to be encoded
 * Return: letters
 */
char *rot13(char *n)
{
	if (n >= 'a' && n <= 'z')
	{
		n = n + '13';
		_putchar(n);
	}
}
