#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: write a lowercase a-z in reversal mode.
 *
 * return: Always 0 (success)
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);


}
