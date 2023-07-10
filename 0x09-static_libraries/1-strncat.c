#include "main.h"
/**
 * *_strncat - copiesn numberofwordsin a string
 * @dest: string to be copied to
 * @src: string to be ammended
 * @n: size of string to be copied
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0;
	int sl = 0;

	while (dest[dl] != 0)
		dl++;
	while (sl < n && src[sl] != 0)
	{
		dest[dl] = src[sl];
		sl++;
		dl++;
	}
	dest[dl] = 0;
	return (dest);
}
