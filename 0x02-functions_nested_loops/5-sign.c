#include "main.h"

/**
 * print_sign - print the sign of a number
 * * @n: type int integer, can be positive or negative
 * Description: print +, 0, or - depending on number with return
 *
 * Return: 1 if +, 0 if 0 and -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43 + 0);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + 48);
		return (0);
	}
	{
		_putchar(45 + 0);
		return (-1);
	}
}
