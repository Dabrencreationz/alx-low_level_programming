#include<stdio.h>

/**
 * Main - Entry point
 *
 * Description: Write a lowercase a-z in reversal mode.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/*my code goes here*/

	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);

}
