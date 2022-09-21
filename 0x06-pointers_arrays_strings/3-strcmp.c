#include"main.h"

/**
 * _strcmp - Function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: compare against string 2
 *
 * Return: 0
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] != '\0' && s2[i] != '\n')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}
	return (r);
}
