#include "main.h"

/**
 * jack_bauer - Jack Bauer the game
 *where i j k l are ij hours and kl min
 */
void jack_bauer(void)
{
	int i, j, k;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; j <= 9; j++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
