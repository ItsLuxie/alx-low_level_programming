#include "main.h"
/**
 * _strcpy - copies a string to another
 * @dest: string to output
 * @src: string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
