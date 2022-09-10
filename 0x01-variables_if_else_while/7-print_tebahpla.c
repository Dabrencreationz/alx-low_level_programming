#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: write a lowercase in reversal mode.
 *
 * return: Always 0 (success)
 */

int main(void)

{
	char alpha = 'z';
	
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);

}
