#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (succee)
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
