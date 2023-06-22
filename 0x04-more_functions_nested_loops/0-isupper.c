#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if upper
 * @c: character.
 *
 * Return: Always 1 if uppercase and 0 else.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
