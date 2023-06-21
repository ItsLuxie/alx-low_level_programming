#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * print_last_d/igit - return last digit
 * @n: number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	_putchar('0' + last);
	return (last);
}
