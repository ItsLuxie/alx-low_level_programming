#include "main.h"

/**
 * _isupper - check if upper
 * Description: checks for uppercase characters
 * @c: character.
 *
 * Return: Always 1 if uppercase and 0 else.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
