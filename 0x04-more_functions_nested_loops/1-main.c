#include"../main.h"

/**
 * main - check the code for ALX School students
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	cha c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));

	return (0);
}
