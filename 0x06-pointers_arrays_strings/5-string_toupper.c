#include "main.h"
#include <string.h>
/**
 * *string_toupper - changes lower to uppercase
 * @n: the characters
 * Return: letters
 */
char *string_toupper(char *n)
{
	int j = 0;

	while (n[j] != 0)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - 32;
			i++;
		}
	}
	return (n[j]);
}
