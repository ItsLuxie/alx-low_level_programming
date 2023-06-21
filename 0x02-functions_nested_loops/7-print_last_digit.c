#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_last_digit - return last digit
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = -n;
	last = n % 10;
	if (last < 0)
		last = -last;

	_putchar('0' + last);
	return (last);
}
