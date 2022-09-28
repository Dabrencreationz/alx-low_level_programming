#include "main.h"

/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 * @n : input number
 * @min: minimum number to g
 * @max: maximun number to g
 * Return: square root of @n or -1
 */

int _sqrt_recursion_wrapper(int n, int min, int max)
{
	int g, g_s;

	g = (min + max) / 2;
	g_s = g * g;

	if (g_s == n)
		return (g);
	else if (min == max)
		return (-1);
	else if (g_s < n)
		return (_sqrt_recursion_wrapper(n, g + 1, max));
	else
		return (_sqrt_recursion_wrapper(n, min, g - 1));
}

/**
 * _sqrt_recursion - a function that returns the natural sqr root of a number
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
