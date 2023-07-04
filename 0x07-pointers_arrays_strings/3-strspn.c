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
	unsigned int i, j, prefix_len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				prefix_len++;
			if (accept[j] == '\0')
				return (prefix_len);
		}
	}
	return (prefix_len);
}
