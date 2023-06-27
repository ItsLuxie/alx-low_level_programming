#include "main.h"
/**
 * swap_int - swaps integer
 * @a: first number
 * @b: second number to swap wuth
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
