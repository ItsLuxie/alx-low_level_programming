#include <stdio.h>
/**
 * main - entrypoint with parameters
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
	{
		--argc;
		printf("%d\n", argc);
	}
	return (0);
}
