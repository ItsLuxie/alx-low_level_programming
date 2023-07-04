#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a charcater in a string
 * @s: the string
 * @c: the character
 * Return: first occurence of 
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
