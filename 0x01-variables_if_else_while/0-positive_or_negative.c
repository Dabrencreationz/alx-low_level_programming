#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**main - Entry point
 * Description - print whether the number stored in the variable n is positive or negative.
 * return: (0) success
 *
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

/* my code*/
if (n>0)
	printf("%i; positve\n", n);
else if (n==0)
	printf("%i; zero\n", n);
else if (n<0)
	print("%i; negative\n", n)n;
	return (0);
	}

