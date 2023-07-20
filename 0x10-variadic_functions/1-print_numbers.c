#include "variadic_functions.h"
#include  <stdio.h>
/**
 * print_numbers - prints numbers with separators
 * @separator: coma
 * @n: numbers to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int r;

	va_list(mynum);

	va_start(mynum, n);

	separator = ",";
	if (separator)
	{
		for (; i != n; i++)
		{
			r = va_arg(mynum, int);
			printf("%d%s ", r, separator);
		}
	}
	va_end(mynum);
	printf("\n");
}
