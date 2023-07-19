#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - our function name
 * @name: pointer to name printed
 * @f: pointer to function chategoeized as char
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
