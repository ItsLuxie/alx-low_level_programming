#include "main.h"
#include <stdio.h>
/**
 * rot13 - encoding system
 * @s: letters to be encoded
 * Return: letters
 */
char *rot13(char *s)
{
	int i, j;
	char m = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';
	char n[] = 'NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm';

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; s[j] != 0; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
