#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 * @s: string 1
 * @accept: string 2
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (s[i] == accept[j])
			len++;
		if (accept[j] == '\0')
			return (len);
	}
	return (len);
}
