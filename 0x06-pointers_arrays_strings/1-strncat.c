#include"main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: number of bytes from @src
 *
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\n'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\n';

	return (dest);
}
