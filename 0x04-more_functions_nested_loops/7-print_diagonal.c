#include "main.h"

/**
 *print_diagonal - print a diagonal line
 *
 * @n: is an inpt integer
 *
 */

void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}

