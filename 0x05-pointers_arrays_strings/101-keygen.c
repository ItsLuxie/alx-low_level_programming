#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/**
 * main - Generates random password valid password for 102-crack me
 * Return: Always 0
 */
int main(void)
{
	int i = 0, pass;

	srand(time(NULL));

	while (i <= 2646)
	{
		cra = (rand() % 127) + 1;
		write(1, &pass, 1);
		i = i + pass;
	}

	pass = 2772 - i;
	write(1, &pass, 1);

	return (0);
}
