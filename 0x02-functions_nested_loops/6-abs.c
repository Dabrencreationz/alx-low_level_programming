#include "main.h"

/**
 * Description: abs - function for absolute value of integer
 * @n takes in integer type for function
 * Return: Always 0
 */

int abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
