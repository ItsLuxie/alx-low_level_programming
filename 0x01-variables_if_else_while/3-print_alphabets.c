#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha, alphab;

	alpha = 'a';

	alphab = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);

		alpha++;
	}
	while (alphab <= 'Z')
	{
		putchar(alphab);
		
		alphab++;
	}
	putchar('\n');

	return (0);
}
