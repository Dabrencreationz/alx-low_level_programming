#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars and initialize
 * it with a speciific char
 * @size: size of memory to print
 * @c: char used to initialize
 * Return: @a
 */

char *create_array(unsigned int size, char c)
{
	unsigned int;
	char *a;

	if (size == 0)
		return (NULL)
			a = malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (0);
}
