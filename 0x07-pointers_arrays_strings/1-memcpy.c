#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: our destination
 * @src: our source
 * @n: size of thw arrays
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	while (dest[i] != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
