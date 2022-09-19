#include"main.h"

/**
 *  main - swap.c: swaps the value of two integers using two parameters
 *
 * @a: input parament 1
 *
 * @b: input parament 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

