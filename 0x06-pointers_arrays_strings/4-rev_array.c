#include"main.h"

/**
 * reverse_array - Function that reverses array of integers
 *
 * @a: pointer to int array
 * @n: number of element to swap
 *
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (1 = 0; (1 < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - -i] = c;
	}
}
