#include "main.h"

/**
 * jack_bauer - Jack Bauer the game
 *where i j k l are ij hours and kl min
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
			int highest = 3;
		else
			highest = 9;
		for (j = 0; j <= highest; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
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
