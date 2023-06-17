#include <stdio.h>
#include <string.h>
/**
 *  * main - Entry Point
 *   * Return: returns 0
 *    */
int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')
    {
        // print the value of the variable
        putchar(alphabet);

        // increment the variable 
        alphabet++;
    }

    putchar('\n');
    return (0);
}
