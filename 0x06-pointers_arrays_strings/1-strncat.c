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
	int destnlen = 0;
	int srclen = 0;

	while (dest[destnlen] != 0)
		destnlen++;
	/*while (src[srclen] == 0)*/
		/*break;*/
	while (srclen < n && src[srclen] != 0)
	{
		dest[destnlen] = src[srclen];
		srclen++;
		destnlen++;
	}
	dest[destnlen] = 0;
	return (dest);
}
