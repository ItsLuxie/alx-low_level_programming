#include "main.h"
/**
 * _isdigit - checks whether its digit
 * @c: character to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (isdigit(c) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
