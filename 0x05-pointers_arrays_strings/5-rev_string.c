#include "main.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i, j;

	for (i = strlen(s) - 1, j = 0; i > j; i--, j++)
	{
		char rev = s[j];

		s[j] = s[i];
		s[i] = rev;
	}
}
