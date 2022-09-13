#include"main.h"

/**
 * main- Entry point
 * Description: _islower - function to check if character is lowercase
 * @c: checks input of function
 * Return: 1 if c is lowercase
 *  otherwise return 0
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
