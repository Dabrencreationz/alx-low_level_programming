#include "main.h"

/**
 * main:  _isdigit - checks if input is digit between 0 - 9
 *
 * Description: Write a function that checks for a digit (0 through 9).
 *
 * @c: input
 *
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

