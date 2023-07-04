#include "main.h"
/**
 * _strchr - locates a charcater in a string
 * @s: the string
 * @c: the character
 * Return: first occurence of 
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			s++;
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return ('\0');
}
