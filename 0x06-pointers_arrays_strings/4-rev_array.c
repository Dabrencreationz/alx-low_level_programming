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
	int c, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		c = a[s];
		a[s] = a[e];
		a[e] = c;
		s++;
		e--;
	}
}
