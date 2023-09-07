#include <stdio.h>
#include "main.h"

/**
* binary_to_uint- function that convert binary to unsigned int
* @b: binary
* Return: unsigned int(Success)
*/

unsigned int binary_to_uint(const char *b)
{
	int n = 0, j;
	unsigned int result = 0, non_binary = 0;

	if (b == NULL)
		return (non_binary);
	while (b[n] != '\0')
	n++;
	n -= 1;
	j = 0;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
		{
			return (non_binary);
		}
		if (b[j] == '1')
		{
			result += (1 * (1 << n));

			j++;

			n--;
		}
	}
return (result);
}
