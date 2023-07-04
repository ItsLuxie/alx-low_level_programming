#include "main.h"
/**
 * _strchr - locates a charcater in a string
 * @s: the string
 * @c: the character
 * Return: s1
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == 'c')
		{
			return (s[i]);
		}
	}
	return (s[i]);
}
