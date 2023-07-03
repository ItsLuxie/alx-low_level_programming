#include "main.h"
#include <string.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: prefix_len
 */
unsigned int _strspn(char *s, char *accept)
{
	size_t len1 = strlen(s);
	size_t len2 = strlen(accept);
	size_t prefix_len = 0;
	size_t i, j;

	for (i = 0; i < len1; i++)
	{
		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
				prefix_len++;
			else
				break;
		}
	}
	return (prefix_len);
}
