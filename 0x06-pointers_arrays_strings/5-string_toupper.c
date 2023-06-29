#include "main.h"
#include <string.h>
/**
 * *string_toupper - changes lower to uppercase
 * @n: the characters
 * Return: letters
 */
char *string_toupper(char *n)
{
	int i = strlen(n);
	int j;

	for (j = 0; j < i; j++)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
			n[j] = n[j] - 32;
	}
	return (n[j]);
}
