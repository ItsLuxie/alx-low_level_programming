#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - prints power of
 * @x: number
 * @y: power
 * Return: 0 succcess
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
