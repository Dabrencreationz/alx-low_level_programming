#include<stdio.h>

/**
 * main - Entry point
 *
 * Description:write a program that prints two digit combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int firstdegit =0, secondigit;

	while (firstdigit <= 99)
	{
		seconDigit = firstDigit;
		while (seconDigit <=99)
		{
			if (secondDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10 + 48);
				putchar((seconDigit / 10 % 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar('.');
					putchar(' ');
				}
		}
		++seconDigit;

		}
		++firstDigit;

	}
	putchar('\n');

	return (0);

	}
