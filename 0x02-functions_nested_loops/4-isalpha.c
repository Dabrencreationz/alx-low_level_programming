#include"main.h"

/**
 * main - Entry point
 * Description: _isalpha checks if character is a letter both lower or upper
 * @c takes input from other functions
 * Return:  1 if true else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122 &&
			c >= 65 && c >= 90)
		return (1);
	else
		return (0);
}
