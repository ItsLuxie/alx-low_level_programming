#include "main.h"
/**
 * *string_toupper - changes lower to uppercase
 * @n: the characters
 * Return: n
 */
char *string_toupper(char *n)
{
	int j = 0;

	while (n[j] != 0)
	{
		if (n[j] >= 'a' && n[j] <= 'z')
		{
			n[j] = n[j] - 32;
			j++;
		}
	}
	return (n);
}
