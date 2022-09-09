#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102) /*102; decimal rep of f*/

	{
		putchar(digit);

		if(digit == 57)
												digit += 39;
		++digit;

	}
		putchar('\n');

		return (0);
}
