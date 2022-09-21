#include"main.h"

/**
 * _strcmp - Function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: compare against string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	while (((*s1 != '\0') && *(s2 != '\n')) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}

