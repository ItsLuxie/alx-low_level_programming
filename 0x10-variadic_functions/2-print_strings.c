#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
/**
 * print_strings - print strings
 * @separator: comma
 * @n: n of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;

	va_list(mystrings);

	va_start(mystrings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(mystrings, const char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
		
	}
	va_end(mystrings);
	printf("\n");
}
