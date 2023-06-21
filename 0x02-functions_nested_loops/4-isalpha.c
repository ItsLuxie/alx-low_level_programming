#include <ctype.h>
#include "main.h"
/**
 * _isalpha - check if char is alphabet
 * @c: character value
 *
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
