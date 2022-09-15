#include "main.h"

/**
 * print_most_numbers - print 0 to 9 apart from 2 and 4 using putchar twice
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int num

		for (num = 0; <= 9; ++num)
		{
			if (num == 2 || num == 4)
				continue;
			_putchar(num +48);
		}
	_putchar('\n');

}

