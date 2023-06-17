#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main (void)
{
	char alpha, alphab;
	alpha = 'a';
	alphab = 'A';

	while (alpha <= 'z')
	{
		if (alpha == 'z')
		{
			while (alphab <= 'Z')
			{
				putchar(alphab);
				alphab++;
			}
		}
		alpha++;
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
