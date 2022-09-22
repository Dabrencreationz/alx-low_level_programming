#include <stdio.h>
#include"main.h"

/**
 * main - entry point
 * Description: magic
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	p[5] = 98;
	/*
	 * write your line of code here...
	 * Remember:
	 * you are not allowed to use a
	 * you are not allowed to modify p
	 * only one ststement
	 * -you are not allowed to code anything else than this line of code
	 */

	printf("a[2] = %d\n", a[2]);
	/* ...so that this prints 98\n */

	return (0);

}
