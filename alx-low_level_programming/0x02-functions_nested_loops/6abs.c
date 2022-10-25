#include "main.h"

/**
 * abs - function for absolute value of integer
 * @n: takes in integer type input for function
 * Return: Always 0 (success)
 */

int abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
