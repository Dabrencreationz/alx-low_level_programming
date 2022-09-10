#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print the variable n if positive or negative or 0.
 *
 * return: Always 0 (success)
*/
int main(void)

{
	int n;
	Srand(time(0));
	n = rand() - RAND MAX /2;

	/* my code goes here */
	if (n > 0)
		printf("%i is positive\n",n);
	else if (n == 0)
		printf("%i is zero\n",n);
	else
		printf("%i is negative\",n);
	return (0);
}
