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
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int prefix_len = 0;
	unsigned int i, j;

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
