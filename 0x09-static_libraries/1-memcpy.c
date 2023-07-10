#include "main.h"
/**
 * _memcpy - print the memory values
 * @dest: pointer to the memory to copy to
 * @src: pointer to the memory to copy from
 * @n: size of the memory to copy
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p = *src;
		p++;
		src++;
	}
	return (dest);
}
