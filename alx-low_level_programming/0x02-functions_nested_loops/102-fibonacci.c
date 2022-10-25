#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 Fibonacci numbers, starting with 1 and 2.
 * Numbers must have comma and space.
 * Return: Always 0 (success)
 */

int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
